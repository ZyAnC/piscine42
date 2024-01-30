/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:53:15 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/23 11:06:55 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if ((!(*s1) && *s2) || (*s1 && !*s2))
		return (*s1 - *s2);
	return (0);
}

void	ft_sort_int_tab(char **tab, int *tab2, int size)
{
	int	i;
	int	j;
	int	tmpindex;

	i = 0;
	while (i < size)
	{
		j = 1;
		while (j < size - i - 1)
		{
			if (ft_strcmp(tab[tab2[j]], tab[tab2[j + 1]]) > 0)
			{
				tmpindex = tab2[j];
				tab2[j] = tab2[j + 1];
				tab2[j + 1] = tmpindex;
			}
			j++;
		}
		i++;
	}
}

void	ft_putchar(int ac, char **argv, int *savein)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	while (i <= ac - 1)
	{
		j = 0;
		while (argv[savein[i]][j])
		{
			write(1, &argv[savein[i]][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	recordasc(int ac, char **argv, int *savein)
{
	int	i;
	int	j;
	int	a;

	j = 0;
	a = 0;
	i = 1;
	while (i <= ac - 1)
	{
		savein[i] = i;
		i++;
	}
	savein[i] = '\0';
	ft_sort_int_tab(argv, savein, ac);
	ft_putchar(ac, argv, savein);
}

int	main(int ac, char **argv)
{
	int	savein[1000];

	savein[0] = 0;
	recordasc(ac, argv, savein);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:21:07 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/30 20:21:09 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	sort(char **tab, int size)
{
	int		i;
	int		j;
	char	*tmpindex;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				tmpindex = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmpindex;
			}
			j++;
		}
		i++;
	}
}

void	ft_sort_string_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	sort(tab, i);
}
/*#include <stdio.h>
int main() {
    char *strings[] = {"bb", "dd", "aa", "dete", NULL};
    int i;


    printf("Before sorting:\n");
    for (i = 0; strings[i] != NULL; i++) {
        printf("%s\n", strings[i]);
    }


    ft_sort_string_tab(strings);


    printf("\nAfter sorting:\n");
    for (i = 0; strings[i] != NULL; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
*/

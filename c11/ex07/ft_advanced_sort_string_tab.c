/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:54:40 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/31 20:34:14 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		end;
	char	*tmp;

	end = 0;
	while (end == 0)
	{
		end = 1;
		i = -1;
		while (tab[++i + 1])
		{
			if ((*cmp)(tab[i], tab[i + 1]) > 0)
			{
				end = 0;
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
		}
	}
}

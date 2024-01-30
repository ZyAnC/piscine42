/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 10:24:34 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/28 10:37:20 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	char	*save;

	dest = malloc(ft_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	save = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (save);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	tab = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		if (!(tab[i].copy))
			return (NULL);
		i++;
	}
	tab[i].str = 0;
	tab[i].size = 0;
	tab[i].copy = 0;
	return (tab);
}
/*
#include <stdio.h>
int	main(void)
{
	char **strs;

	strs = (char **)malloc(sizeof(char *) * 3);
	strs[0] = (char *)malloc(sizeof(char) * 6);
	strs[0] = "Hello";
	strs[1] = (char *)malloc(sizeof(char) * 6);
	strs[1] = "World";
	strs[2] = (char *)malloc(sizeof(char) * 3);
	strs[2] = "!!";

	t_stock_str *result_arr = ft_strs_to_tab(3, strs);
	int cur = 0;
	while (cur < 4)
	{
		printf("%d => size : %d, str : %s, copy : %s\n", cur,
		 result_arr[cur].size, result_arr[cur].str, result_arr[cur].copy);
		cur++;
	}
}*/

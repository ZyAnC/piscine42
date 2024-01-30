/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solvehelp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:13:42 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/30 14:13:44 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../librarys/bsq.h"

int	ft_minimum_2(int n1, int n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

int	ft_minimum_3(int n1, int n2, int n3)
{
	return (ft_minimum_2(n1, ft_minimum_2(n2, n3)));
}

void	ft_paint(t_map *map, int coords[], int n)
{
	int	x;
	int	y;

	y = coords[1];
	while (y < coords[1] + n)
	{
		x = coords[0];
		while (x < coords[0] + n)
		{
			map->buffer[y][x] = map->paint;
			x++;
		}
		y++;
	}
}

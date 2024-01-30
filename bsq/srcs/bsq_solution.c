/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_solution.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:49:27 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/29 16:49:30 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../librarys/bsq.h"

void	process_matrix_and_detect_obstacle(t_map *map, int **mat)
{
	unsigned int	y;
	unsigned int	x;
	unsigned int	f;
	unsigned int	j;

	y = 0;
	while (++y < map->lines)
	{
		x = 0;
		while (++x < map->cols)
		{
			if (map->buffer[y][x] == map->pillar)
				mat[y][x] = 0;
			else
			{
				f = x - 1;
				j = y - 1;
				mat[y][x] = ft_minimum_3(mat[y][f], mat[j][x], mat[j][f]) + 1;
			}
		}
	}
}

void	update_max_and_coords(t_map *map, int **mat, int *max, int coords[])
{
	unsigned int	y;
	unsigned int	x;

	y = 0;
	while (++y < map->lines)
	{
		x = 0;
		while (++x < map->cols)
		{
			if (mat[y][x] > *max)
			{
				*max = mat[y][x];
				coords[0] = x - *max + 1;
				coords[1] = y - *max + 1;
			}
		}
	}
}

void	middle_obs(t_map *map, int *coords, unsigned int y, unsigned int f)
{
	unsigned int	x;

	while (y < map->lines)
	{
		f = 0;
		x = 0;
		while (x < map->cols && map->buffer[y][x] == map->pillar)
			x++;
		if (x < map->cols)
		{
			coords[0] = x;
			coords[1] = y;
			break ;
		}
		y++;
	}
}

int	ft_solve(t_map *map, int **mat, int coords[])
{
	unsigned int	y;
	unsigned int	first_empty_space_col;
	int				max;

	y = 0;
	max = 0;
	first_empty_space_col = 0;
	process_matrix_and_detect_obstacle(map, mat);
	update_max_and_coords(map, mat, &max, coords);
	if (max == 1)
		middle_obs(map, coords, y, first_empty_space_col);
	return (max);
}

void	ft_bsq(t_map *map)
{
	int	**matrix;
	int	coords[2];
	int	n;

	matrix = ft_initiate(map);
	n = ft_solve(map, matrix, coords);
	ft_paint(map, coords, n);
	ft_print_str_array(map->buffer, map->lines, map->cols);
	ft_delete_matrix(matrix, map->lines);
}

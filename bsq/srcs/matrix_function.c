/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_function.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:49:38 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/29 16:49:44 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// initialize, change, print, and free matrix (maybe need one more file for
// this)
#include "../librarys/bsq.h"

int	**ft_initiate(t_map *map)
{
	unsigned int	i;
	int				**matrix;

	i = 0;
	matrix = ft_new_matrix(map->lines, map->cols);
	while (i < map->cols)
	{
		if (map->buffer[0][i] == map->pillar)
			matrix[0][i] = 0;
		else
			matrix[0][i] = 1;
		i++;
	}
	i = 0;
	while (i < map->lines)
	{
		if (map->buffer[i][0] == map->pillar)
			matrix[i][0] = 0;
		else
			matrix[i][0] = 1;
		i++;
	}
	return (matrix);
}

t_map	*ft_new_map(char *file)
{
	int		i;
	int		k;
	int		aux;
	t_map	*map;

	i = -1;
	k = 0;
	aux = ft_strlen_delimiter(file, '\n');
	map = (t_map *)malloc(sizeof(t_map));
	ft_assert(map != NULL, "ft_store(): malloc()");
	map->lines = ft_natoi(file, aux - 3);
	map->cols = ft_strlen_delimiter(file + aux + 1, '\n');
	map->empty = file[aux - 3];
	map->pillar = file[aux - 2];
	map->paint = file[aux - 1];
	map->buffer = ft_new_str_array(map->lines, map->cols);
	while (file[++i + aux])
	{
		if (file[i + aux] != '\n')
		{
			map->buffer[k / map->cols][k % map->cols] = file[i + aux];
			k++;
		}
	}
	return (map);
}

int	**ft_new_matrix(int n1, int n2)
{
	int	i;
	int	**array;

	i = 0;
	array = (int **)malloc(n1 * sizeof(int *));
	ft_assert(array != NULL, "Allocation failed on ft_new_matrix()\n");
	while (i < n1)
		array[i++] = ft_new_array(n2);
	return (array);
}

void	ft_delete_matrix(int **matrix, unsigned int n1)
{
	unsigned int	i;

	i = 0;
	while (i < n1)
		free(matrix[i++]);
	free(matrix);
}

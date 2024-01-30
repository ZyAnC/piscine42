/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_visibility.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:37:21 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/21 14:55:59 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define G_GRID_SIZE 4

int	check_left(int **grid, int i)
{
	int	max_height;
	int	visible_count;
	int	j;

	max_height = 0;
	visible_count = 0;
	j = 0;
	while (j < G_GRID_SIZE)
	{
		if (grid[i][j] > max_height)
		{
			max_height = grid[i][j];
			visible_count++;
		}
		j++;
	}
	return (visible_count);
}

int	check_right(int **grid, int i)
{
	int	max_height;
	int	visible_count;
	int	j;

	max_height = 0;
	visible_count = 0;
	j = G_GRID_SIZE - 1;
	while (j >= 0)
	{
		if (grid[i][j] > max_height)
		{
			max_height = grid[i][j];
			visible_count++;
		}
		j--;
	}
	return (visible_count);
}

int	check_top(int **grid, int i)
{
	int	max_height;
	int	visible_count;
	int	j;

	max_height = 0;
	visible_count = 0;
	j = 0;
	while (j < G_GRID_SIZE)
	{
		if (grid[j][i] > max_height)
		{
			max_height = grid[j][i];
			visible_count++;
		}
		j++;
	}
	return (visible_count);
}

int	check_bottom(int **grid, int i)
{
	int	max_height;
	int	visible_count;
	int	j;

	max_height = 0;
	visible_count = 0;
	j = G_GRID_SIZE - 1;
	while (j >= 0)
	{
		if (grid[j][i] > max_height)
		{
			max_height = grid[j][i];
			visible_count++;
		}
		j--;
	}
	return (visible_count);
}

int	check_visibility(int **grid, int *clues)
{
	int	i;

	i = 0;
	while (i < G_GRID_SIZE)
	{
		if (check_left(grid, i) != clues[i])
			return (0);
		if (check_right(grid, i) != clues[4 + i])
			return (0);
		if (check_top(grid, i) != clues[8 + i])
			return (0);
		if (check_bottom(grid, i) != clues[12 + i])
			return (0);
		i++;
	}
	return (1);
}

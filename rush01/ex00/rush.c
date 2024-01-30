/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 11:08:18 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/21 14:49:15 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define G_GRID_SIZE 4

int	check_visibility(int **grid, int *clues);

int	is_valid(int **grid, int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < G_GRID_SIZE)
	{
		if (grid[row][i] == num || grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	solve(int **grid, int row, int col, int *clues)
{
	int	num;

	num = 1;
	if (row == G_GRID_SIZE)
		return (check_visibility(grid, clues));
	if (col == G_GRID_SIZE)
		return (solve(grid, row + 1, 0, clues));
	while (num <= G_GRID_SIZE)
	{
		if (is_valid(grid, row, col, num))
		{
			grid[row][col] = num;
			if (solve(grid, row, col + 1, clues))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}

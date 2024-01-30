/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printgrid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 12:06:10 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/20 12:07:03 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printgrid(int **grid)
{
	int		row;
	int		col;
	char	out;

	row = 0;
	col = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			out = grid[row][col] + '0';
			write(1, &out, 1);
			write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

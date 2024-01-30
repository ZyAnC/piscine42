/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 11:15:49 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/21 14:57:35 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define G_GRID_SIZE 4

//void    rush(int ipt[4][4]);
void	printgrid(int **grid);
int		is_valid(int **grid, int row, int col, int num);
int		solve(int **grid, int row, int col, int *clues);

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

int	parse_clues(char *agv, int *ipt)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (((agv[i] >= '0' && agv[i] <= '4') || agv[i] == ' ') && agv[i])
	{
		if (agv[i] >= '0' && agv[i] <= '4')
		{
			ipt[a] = agv[i] - '0';
			a++;
		}
		i++;
	}
	return (a);
}

void	igrid(int **grid)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < G_GRID_SIZE)
	{
		grid[i] = (int *) malloc(G_GRID_SIZE * sizeof(int));
		while (j < G_GRID_SIZE)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	main(int ac, char **agv)
{
	int	i;
	int	clues[16];
	int	**grid;

	i = 0;
	if (ac != 2)
	{
		ft_putstr("Error: Invalid number of arguments.\n");
		return (1);
	}
	if (parse_clues(agv[1], clues) != 16)
	{
		ft_putstr("Error: Invalid clues format.\n");
		return (1);
	}
	grid = (int **)malloc(G_GRID_SIZE * sizeof(int *));
	igrid(grid);
	if (solve(grid, 0, 0, clues))
		printgrid(grid);
	else
		ft_putstr("No solution found.\n");
	while (i < G_GRID_SIZE)
		free(grid[i++]);
	free(grid);
	return (0);
}

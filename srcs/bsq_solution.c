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

int	ft_solve(t_map *map, int **mat, int coords[])
{
	unsigned int y;
	unsigned int x;
	int	max;
	int	middle_obstacle_detected;

	y = 0;
	max = 0;
	while (++y < map->lines)
	{
		x = 0;
		while (++x < map->cols)
		{
			if (map->buffer[y][x] == map->pillar)
			{
				mat[y][x] = 0;
				if (y > 0 && y < map->lines / 2)
				{
					middle_obstacle_detected = 1;
				}
			}
			else
			{
				mat[y][x] = ft_minimum_3(mat[y][x - 1], mat[y - 1][x], mat[y - 1][x - 1]) + 1;
			}
			if (mat[y][x] > max)
			{
				max = mat[y][x];
				coords[0] = x - max + 1;
				coords[1] = y - max + 1;
			}
		}
	}

// seems perfect version
// Adjustments for special cases
	if (middle_obstacle_detected && max == 1)
	{
		int row_full;
		unsigned int first_empty_space_col;
		y = 0;
		while (y < map->lines)
		{
			row_full = 1;
			first_empty_space_col = 0;
			x = 0;
			while (x < map->cols)
			{
				if (map->buffer[y][x] != map->pillar)
				{
					row_full = 0;
					first_empty_space_col = x;
					break;
				}
				x++;
			}
			if (!row_full)
			{
				coords[0] = first_empty_space_col;
				coords[1] = y;
				break;
			}
			y++;
		}
	}
	return (max);
}

void	ft_paint(t_map *map, int coords[], int n)
{
	int x;
	int y;

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

void	ft_bsq(t_map *map)
{
	int **matrix;
	int coords[2];
	int n;

	matrix = ft_initiate(map);
	n = ft_solve(map, matrix, coords);
	ft_paint(map, coords, n);
	ft_print_str_array(map->buffer, map->lines, map->cols);
	ft_delete_matrix(matrix, map->lines);
}

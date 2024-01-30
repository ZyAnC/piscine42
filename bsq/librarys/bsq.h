/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:05:22 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/29 17:05:26 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define MAXBUF 1024
// newmap matrix.c
typedef struct s_map
{
	unsigned int	cols;
	unsigned int	lines;
	char			pillar;
	char			empty;
	char			paint;
	char			**buffer;
}	t_map;

//array_function.c
char	**ft_new_str_array(unsigned int n1, unsigned int n2);
void	ft_print_str_array(char **matrix, unsigned int n1, unsigned int n2);
int		*ft_new_array(int n);
char	*ft_remalloc(char *str, int size);
int		ft_natoi(char *number, int n);

//bsq_solution.c
int		ft_minimum_2(int n1, int n2);
int		ft_minimum_3(int n1, int n2, int n3);
int		ft_solve(t_map *map, int **mat, int coords[]);
void	ft_paint(t_map *map, int coords[], int n);
void	ft_bsq(t_map *map);
//general.c
void	ft_putchar(char c);
void	ft_print_error(char *errorinfo);
void	ft_assert(int condition, char *errorinfo);
int		is_digit(char c);
int		is_printable(unsigned char c);

//matrix_function.c
int		**ft_initiate(t_map *map);
t_map	*ft_new_map(char *file);
int		**ft_new_matrix(int n1, int n2);
void	ft_delete_matrix(int **matrix, unsigned int n1);

//parse_file_map.c
int		check_first_line(char *str);
int		check_map_size(char *str);
int		check_maps_exist(char *file);
int		check_linebreak(char *file);
int		check_valid_chars(char *file);

//parse_file_overall.c
char	*terminal_input(void);
void	execute(char *file);
char	*parse_map_file(char *filename, char *str);

// string_func.c
int		ft_strlen(char *str);
int		ft_strlen_delimiter(char *str, char delimiter);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strcat(char *dest, char *src);
char	*ft_new_str(int n);

#endif

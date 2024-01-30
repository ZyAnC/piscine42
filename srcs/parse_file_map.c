/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_file_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:09:35 by likong            #+#    #+#             */
/*   Updated: 2024/01/28 19:09:37 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../librarys/bsq.h"

int	check_first_line(char *str)
{
	int	i;
	int	num;
	int	str_length;
	int	num_amounts;

	i = 0;
	num_amounts = 0;
	str_length = ft_strlen_delimiter(str, '\n');
	num = ft_natoi(str, str_length - 3);
	while (num > 0)
	{
		num /= 10;
		num_amounts++;
	}
	while (i < str_length)
		if (!is_printable(str[i++]))
			return (0);
	if (str[str_length - 1] == str[str_length - 2]
		|| str[str_length - 1] == str[str_length - 3]
		|| str[str_length - 2] == str[str_length - 3])
		return (0);
	if (num_amounts + 3 == str_length && ft_natoi(str, str_length - 3) > 0)
		return (1);
	return (0);
}

int	check_map_size(char *str)
{
	int	i;
	int	col_length;
	int	current_line_length;
	int	first_line_length;

	i = 0;
	col_length = 1;
	current_line_length = 0;
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	i++;
	first_line_length = ft_strlen_delimiter(str + i, '\n');
	i += first_line_length + 1;
	while (str[i] != '\0')
	{
		current_line_length = ft_strlen_delimiter(str + i, '\n');
		if (current_line_length != first_line_length)
			return (0);
		i += current_line_length + 1;
		col_length++;
	}
	if (first_line_length == col_length)
		return (1);
	return (0);
}

int	check_maps_exist(char *file)
{
	int	total_str_length;
	int	first_line_length;

	total_str_length = ft_strlen(file);
	first_line_length = ft_strlen_delimiter(file, '\n');
	if (total_str_length == 0 || first_line_length == total_str_length - 1
		|| first_line_length == total_str_length)
		return (0);
	return (1);
}

int	check_linebreak(char *str)
{
	int	i;
	int	lines;
	int	counter;

	i = 0;
	counter = -1;
	lines = ft_natoi(str, ft_strlen_delimiter(str, '\n') - 3);
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			counter++;
		i++;
	}
	return (lines == counter);
}

int	check_valid_chars(char *str)
{
	int		i;
	int		info_length;
	char	empty_char;
	char	obstacle_char;

	i = 0;
	info_length = ft_strlen_delimiter(str, '\n');
	empty_char = str[info_length - 3];
	obstacle_char = str[info_length - 2];
	while (str[info_length + i] != '\0')
	{
		if (str[info_length + i] != empty_char
			&& str[info_length + i] != obstacle_char
			&& str[info_length + i] != '\n')
			return (0);
		i++;
	}
	return (1);
}

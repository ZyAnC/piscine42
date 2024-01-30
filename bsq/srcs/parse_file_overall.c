/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_file_overall.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:49:52 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/29 16:49:57 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_file_overall.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:00:02 by likong            #+#    #+#             */
/*   Updated: 2024/01/28 19:00:06 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../librarys/bsq.h"

ssize_t	count_contents_bytes(char *filename)
{
	int		value;
	ssize_t	current_place;
	ssize_t	bytes_count;
	char	buf[MAXBUF];

	current_place = 0;
	bytes_count = 0;
	value = open(filename, O_RDONLY);
	ft_assert(value != -1, "parse_file(): open()");
	if (value == -1)
		putchar('1');
	while (1)
	{
		current_place = read(value, buf, 1);
		if (current_place == 0)
			break ;
		bytes_count += current_place;
	}
	return (bytes_count);
}

char	*read_file(char *filename)
{
	int		i;
	int		value;
	char	c;
	char	*file;
	ssize_t	bytes;

	i = 0;
	bytes = count_contents_bytes(filename);
	ft_assert((file = ft_new_str(bytes + 1)) != NULL, "error when new string");
	ft_assert((value = open(filename, O_RDONLY)) != -1, "error when open file");
	while (read(value, &c, 1) > 0)
		file[i++] = c;
	file[i] = '\0';
	return (file);
}

char	*terminal_input(void)
{
	int				i;
	char			*file;
	unsigned char	c;

	i = 0;
	file = ft_new_str(1);
	file[0] = '\0';
	while (read(STDIN_FILENO, &c, 1) > 0)
	{
		file = ft_remalloc(file, i + 2);
		file[i] = c;
		i++;
	}
	return (file);
}

void	execute(char *file)
{
	t_map	*map;

	map = ft_new_map(file);
	ft_bsq(map);
	free(file);
}

char	*parse_map_file(char *filename, char *str)
{
	char	*file;

	if (filename == NULL)
		file = str;
	else
	{
		file = read_file(filename);
	}
	if (!check_first_line(file)
		|| !check_map_size(file)
		|| !check_maps_exist(file)
		|| !check_linebreak(file)
		|| !check_valid_chars(file))
	{
		ft_print_error("map error\n");
		return (NULL);
	}
	return (file);
}

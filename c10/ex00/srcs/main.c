/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:13:33 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/29 19:13:40 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}

void	readfile(char *filename)
{
	int		size;
	int		file;
	char	buf[4097];

	file = open(filename, O_RDONLY);
	if (file == -1)
		ft_putstr("Cannot read file.");
	else
	{
		size = read(file, buf, 4096);
		while (size != 0)
		{
			size = read(file, buf, 4096);
			ft_putstr(buf);
		}
	}
	close(file);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.");
	else if (argc == 2)
		readfile(argv[1]);
	else
		ft_putstr("Too many arguments.");
	return (0);
}

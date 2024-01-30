/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 20:21:03 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/29 20:22:56 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <libgen.h>
#include <string.h>

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}

void	catfile(int fd)
{
	int		size;
	char	buf[29000];

	size = read(fd, buf, 28999);
	while (size != 0)
	{
		size = read(fd, buf, 28999);
		ft_putstr(buf);
	}
}

int	main(int argc, char **argv)
{
	int	fd;
	int	i;

	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd != -1)
			catfile(fd);
		else
		{
			ft_putstr(basename(argv[0]));
			ft_putstr(": ");
			ft_putstr(argv[i]);
			ft_putstr(": ");
			ft_putstr(strerror(errno));
			ft_putstr("\n");
		}
		close(fd);
		i++;
	}
}

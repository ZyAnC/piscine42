/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:02:59 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/30 12:03:01 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <libgen.h>
#include <string.h>

int	main(int argc, char **argv)
{
	int	fd;
	int	bytesize;

	bytesize = 0;

			ft_putstr(basename(argv[0]));
			ft_putstr(": ");
			ft_putstr(argv[i]);
			ft_putstr(": ");
			ft_putstr(strerror(errno));
			ft_putstr("\n");



}

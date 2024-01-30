/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: likong <likong@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:52:57 by likong            #+#    #+#             */
/*   Updated: 2024/01/28 18:52:59 by likong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librarys/bsq.h"

int	main(int argc, char **argv)
{
	char	*file;
	int		i;

	i = 1;
	if (argc == 1)
	{
		file = parse_map_file(NULL, terminal_input());
		if (file != NULL)
			execute(file);
	}
	else
	{
		while (i < argc)
		{
			file = parse_map_file(argv[i], NULL);
			if (file != NULL)
				execute(file);
			if (i != argc - 1)
				write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}

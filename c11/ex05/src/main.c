/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:04:39 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/30 20:00:21 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/doop.h"

void	doop(int a, int b, void (*f[5])(int, int), char c)
{
	if (c == '+')
		f[0](a, b);
	else if (c == '-')
		f[1](a, b);
	else if (c == '*')
		f[2](a, b);
	else if (c == '/')
		f[3](a, b);
	else if (c == '%')
		f[4](a, b);
	else
		write(1, "0\n", 2);
}

int	main(int ac, char **av)
{
	void	(*f[5])(int, int);
	int		a;
	int		b;

	f[0] = &plus;
	f[1] = &sub;
	f[2] = &mul;
	f[3] = &div;
	f[4] = &mod;
	if (ac == 4)
	{
		a = ft_atoi(av[1]);
		b = ft_atoi(av[3]);
		doop(a, b, f, av[2][0]);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:07:55 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/30 20:01:06 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/doop.h"

void	plus(int a, int b)
{
	ft_putnbr(a + b);
	ft_putchar('\n');
}

void	sub(int a, int b)
{
	ft_putnbr(a - b);
	ft_putchar('\n');
}

void	mul(int a, int b)
{
	ft_putnbr(a * b);
	ft_putchar('\n');
}

void	div(int a, int b)
{
	if (b)
		ft_putnbr(a / b);
	else
		ft_putstr("Stop : division by zero");
	ft_putchar('\n');
}

void	mod(int a, int b)
{
	if (b)
		ft_putnbr(a % b);
	else
		ft_putstr("Stop : modulo by zero");
	ft_putchar('\n');
}

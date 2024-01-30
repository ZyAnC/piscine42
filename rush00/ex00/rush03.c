/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:13:55 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/13 12:41:01 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	xline(int x, char a, char b, char c)
{
	int	j;

	j = 0;
	while (j < x)
	{
		if (j == 0)
		{
			ft_putchar(a);
		}
		else if (j == x - 1)
		{
			ft_putchar(c);
		}
		else
		{
			ft_putchar(b);
		}
		j++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	while (i < y)
	{
		if (i == 0 || i == y - 1)
		{
			xline(x, 'A', 'B', 'C');
		}
		else
		{
			xline(x, 'B', ' ', 'B');
		}
		ft_putchar('\n');
		i++;
	}
}

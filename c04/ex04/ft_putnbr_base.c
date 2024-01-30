/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:42:06 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/21 18:26:10 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-'
			|| base[i] <= ' ' || base[i] >= '~')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	long	nb;

	size = checkbase(base);
	if (size == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nb = -(long)nbr;
	}
	else
		nb = nbr;
	if (nb >= size)
	{
		ft_putnbr_base(nb / size, base);
		ft_putchar(base[nb % size]);
	}
	else
		ft_putchar(base[nb % size]);
}
/*
#include <stdio.h>
#include <string.h>
#include <limits.h> 
int main()
{
	ft_putnbr_base(42, "0123456789"); printf("\n");
	ft_putnbr_base(-42, "0123456789"); printf("\n");
	ft_putnbr_base(42, "01"); printf("\n");
	ft_putnbr_base(-42, "01"); printf("\n");
	ft_putnbr_base(42, "0123456789abcdef"); printf("\n");
	ft_putnbr_base(42, "01234567"); printf("\n");
	ft_putnbr_base(INT_MAX, "0123456789abcdef");write(1,"ss",2); printf("\n");
	ft_putnbr_base(INT_MIN, "0123456789abcdef"); write(1,"ab",2);printf("\n");
	ft_putnbr_base(0, "0123456789"); write(1,"ss",2);printf("\n");
	ft_putnbr_base(INT_MAX, "");
	ft_putnbr_base(INT_MAX, "a");
	ft_putnbr_base(INT_MAX, "abb");
	ft_putnbr_base(INT_MAX, "-0123456789");	return 0;
}*/

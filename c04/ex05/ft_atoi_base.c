/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 11:09:46 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/21 15:39:51 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	get_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	if (checkbase(base) == 0)
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str)
	{
		if (get_value(*str, base) == -1)
			break ;
		result = result * checkbase(base) + get_value(*str, base);
		str++;
	}
	return (result * sign);
}

#include <stdio.h>
int main() {
   	printf("%d\n", ft_atoi_base("111000", "01"));
	printf("%d\n", ft_atoi_base("  -+---123 fsf", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("52", "01234567"));
	printf("%d\n", ft_atoi_base("2a", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("-80000001", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("ff", "0123-456789abcdef"));
	printf("%d\n", ft_atoi_base("ff", "01\r23456789abcdef"));
	printf("%d\n", ft_atoi_base("ff", "abcc"));
	printf("%d\n", ft_atoi_base("ff", ""));
	printf("%d\n", ft_atoi_base("ff", "a"));
    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:12:50 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/24 14:12:54 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_value(char c, char *base);

int	checkbase(char *base);

int	ft_atoi_base(char *str, char *base)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
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

void	ft_putnbr_base_to_str(long nb, char *base, char *result, int *index)
{
	int		size;

	size = checkbase(base);
	if (nb >= size)
	{
		ft_putnbr_base_to_str(nb / size, base, result, index);
	}
	result[*index] = base[nb % size];
	(*index)++;
}

void	ft_putnbr_base(int nbr, char *base, char *result)
{
	long	nb;
	int		index;

	index = 0;
	if (nbr < 0)
	{
		result[0] = '-';
		nb = -(long)nbr;
		index = 1;
	}
	else
		nb = nbr;
	ft_putnbr_base_to_str(nb, base, result, &index);
	result[index] = '\0';
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;

	if (checkbase(base_from) == 0)
		return (NULL);
	if (checkbase(base_to) == 0)
		return (NULL);
	result = (char *)malloc(sizeof(char) * 33);
	if (result != NULL)
		ft_putnbr_base(ft_atoi_base(nbr, base_from), base_to, result);
	return (result);
}
/*#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main() {
    char *converted = ft_convert_base("--++--10001111",
	"01", "0123456789abcdef");
    if (converted) {
        write(1, converted, strlen(converted));

    }
    return 0;
}*/

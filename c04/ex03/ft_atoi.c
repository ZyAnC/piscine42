/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:39:28 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/17 09:49:59 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while ((*str >= '0' && *str <= '9'))
	{
		result = result * 10 +(*str - '0');
		str++;
	}
	return (result * sign);
}

#include <stdio.h>
int main (){
	 char *ss = {" "};
    printf("%d",ft_atoi(ss));
	return 0;
}

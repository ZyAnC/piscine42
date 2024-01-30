/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:09:49 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/24 10:09:50 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*outp;
	int	val;
	int	i;

	val = min;
	i = 0;
	if (min >= max)
		return (NULL);
	outp = (int *)malloc((sizeof(int)) * (max - min));
	if (!outp)
		return (NULL);
	while (i < (max - min))
	{
		outp[i++] = val;
		val++;
	}
	return (outp);
}
/*
#include <stdio.h>
int main(void)
{
	int	min;
	int	max;
	int	i;

	i = 0;
	min = 0;
	max = 7;
	while(i < 10)
	{
		printf("%d, ", ft_range(min,max)[i]);
		i++;
	}
}*/

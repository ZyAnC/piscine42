/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:20:21 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/24 10:20:25 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*outp;
	int	val;
	int	i;

	val = min;
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	outp = (int *)malloc((sizeof(int)) * (max - min));
	if (!outp)
	{
		*range = NULL;
		return (0);
	}
	while (i < (max - min))
	{
		outp[i++] = val;
		val++;
	}
	*range = outp;
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i;

	i = 0;
	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/

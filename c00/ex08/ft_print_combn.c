/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:19:20 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/29 18:20:37 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	increase_and_print(char *comb, int n, int index)
{
	int	k;

	while (index >= 0)
	{
		if (comb[index] < '9' - (n - 1 - index))
		{
			comb[index]++;
			k = index + 1;
			while (k < n)
			{
				comb[k] = comb[k - 1] + 1;
				k++;
			}
			write(1, comb, n);
			if (!(comb[0] == '9' - n + 1))
			{
				write(1, ", ", 2);
			}
			index = n;
		}
		index--;
	}
}

void	ft_print_combn(int n)
{
	int		i;
	char	comb[10];

	i = 0;
	while (i < n)
	{
		comb[i] = '0' + i;
		i++;
	}
	write(1, comb, n);
	if (n < 10)
		write(1, ", ", 2);
	increase_and_print(comb, n, n - 1);
}
/*
int main() {
	int n = 9;
	ft_print_combn(n);
	return 0;
}*/

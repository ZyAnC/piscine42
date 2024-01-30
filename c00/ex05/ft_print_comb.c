/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:03:00 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/11 19:19:57 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	comb[5];
	char	comb2[3];

	comb[0] = '0';
	comb2[0] = ',';
	comb2[1] = ' ';
	while (comb[0] <= '9')
	{
		comb[1] = comb[0] + 1;
		while (comb[1] <= '9')
		{
			comb[2] = comb[1] + 1;
			while (comb[2] <= '9')
			{
				write(1, comb, 3);
				if (comb[0] != '7' || comb[1] != '8' || comb[2] != '9')
				{
					write(1, comb2, 2);
				}
				comb[2]++;
			}
			comb[1]++;
		}
		comb[0]++;
	}
}

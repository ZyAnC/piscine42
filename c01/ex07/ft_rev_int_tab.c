/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 12:01:48 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/14 12:20:30 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		left;
	int		right;
	int		tmp;

	left = 0;
	right = size - 1;
	while (left < right)
	{
		tmp = tab[left];
		tab[left++] = tab[right];
		tab[right--] = tmp;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:30:00 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/30 18:30:01 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	ascending;
	int	descending;

	i = 0;
	ascending = 1;
	descending = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			descending = 0;
		if (f(tab[i], tab[i + 1]) > 0)
			ascending = 0;
		i++;
	}
	if (ascending == 1 || descending == 1)
		return (1);
	else
		return (0);
}

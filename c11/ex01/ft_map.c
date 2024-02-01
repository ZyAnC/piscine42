/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:58:48 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/30 17:58:57 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_map(int *tab, int lenght, int (*f)(int))
{
	int		i;
	int		*res;

	res = malloc(sizeof(int) * lenght);
	i = -1;
	while (++i < lenght)
		res[i] = (*f)(tab[i]);
	return (res);
}

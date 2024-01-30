/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:40:55 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/22 19:44:37 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i <= nb && i < 46341) 
		i++;
	i--;
	if (i * i == nb)
		return (i);
	return (0);
}
/*#include <stdio.h>
int main(){
  printf("%d",ft_sqrt(125));

}
*/
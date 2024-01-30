/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:06:12 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/14 17:33:21 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checkalpha(char a)
{
	if (a >= 'a' && a <= 'z')
	{
		return (1);
	}
	if (a >= 'A' && a <= 'Z')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;__LDBL_EPSILON__

	i = 0;
	while (str[i] != '\0')
	{
		if (!(checkalpha(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*// Online C compiler to run C program online
#include <unistd.h>
#include <stdio.h>

int	checkalpha(char a)
{
	if (a >= '0' && a <= '9')
	{write(1,"hi",2);
		return (1);
	}
	write(1,"ww",2);
	return (0);
}
int ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(checkalpha(str[i])))
		{
			return (0);
		}
		i++;
	}
	 write(1,"em",2);
	return (1);
}

int main() {

    ft_str_is_alpha("aaa123");

}*/

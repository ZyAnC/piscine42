/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:08:10 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/17 09:11:06 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}
/*#include <stdio.h>
int main()
{
	 char a[20]="Program";
    char b[20]={'P','r','o','g','r','a','m','\0','s'};

    // using the %zu format specifier to print size_t
    printf("Length of string a = %d \n",ft_strlen(a));
    printf("Length of string b = %d \n",ft_strlen(b));

}
*/

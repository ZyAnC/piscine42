/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:46:58 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/16 18:51:20 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	result;

	i = 0;
	j = 0;
	result = 0;
	while (dest[i] != '\0')
		i++;
	while (src[result] != '\0')
		result++;
	if (size <= i)
		result += size;
	else
		result += i;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (result);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char first[] = "1234";
    char last[] = "56789";
    int r;
    int size = 20;
    char buffer[size];

    strcpy(buffer,first);
    r = ft_strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:42:12 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/23 17:48:22 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	char	*dest;
	char	*save;

	dest = malloc(ft_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	save = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (save);
}
/*#include <stdio.h>
int main()
{
	printf("%s",ft_strdup("aasda"));
}*/

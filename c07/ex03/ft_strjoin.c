/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:37:37 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/24 10:37:40 by yzheng           ###   ########.fr       */
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

void	ftstrcpy(int size, char **strs, char *sep, char *s)
{
	int		i;
	int		j;
	int		c;

	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			s[c++] = sep[j++];
		}
		i++;
	}
	s[c] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		sepsize;
	int		totalen;
	int		i;

	i = 0;
	totalen = 0;
	if (size == 0)
	{
		s = (char *)malloc(1);
		return (s);
	}
	while (i < size)
		totalen += ft_strlen(strs[i++]);
	sepsize = ft_strlen(sep);
	totalen += (size - 1) * sepsize + 1;
	s = (char *)malloc(sizeof(char) * totalen);
	if (!s)
		return (0);
	ftstrcpy(size, strs, sep, s);
	return (s);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*tab[4];
	tab[0] = "";
	tab[1] = "";
	tab[2] = "";
	tab[3] = "";
	printf("%s", ft_strjoin(4, tab, ","));
	return (0);
}*/

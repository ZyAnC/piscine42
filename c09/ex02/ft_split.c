/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:39:00 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/28 15:39:47 by yzheng           ###   ########.fr       */
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

char	*ftstrndup(const char *src, int n)
{
	char	*dest;
	int		i;

	dest = malloc(n + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[n] = '\0';
	return (dest);
}

int	issplitc(char c, char *charset)
{
	int	j;

	j = 0;
	while (charset[j])
	{
		if (c == charset[j])
			return (1);
		j++;
	}
	return (0);
}

int	countstring(char *str, char *charset)
{
	int	i;
	int	count;
	int	isprevsep;

	i = 0;
	count = 0;
	isprevsep = 1;
	while (str[i])
	{
		if (issplitc(str[i], charset))
		{
			isprevsep = 1;
		}
		else if (isprevsep)
		{
			count++;
			isprevsep = 0;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		size;
	int		start;
	int		i;
	int		j;

	i = 0;
	j = 0;
	size = countstring(str, charset);
	start = 0;
	result = malloc((size + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	while (str[i])
	{
		if (!issplitc(str[i], charset) && (i == 0
				|| issplitc(str[i - 1], charset)))
			start = i;
		if (!issplitc(str[i], charset) && (str[i + 1] == '\0'
				|| issplitc(str[i + 1], charset)))
			result[j++] = ftstrndup(str + start, i - start + 1);
		i++;
	}
	result[j] = NULL;
	return (result);
}
/*
#include <stdio.h>
int main() {
    char test_str[] = "aa, World! dd is a test. ";
    char charset[] = " ,.!";
	printf("%d",countstring(test_str,charset));

}
*/

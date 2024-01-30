/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:56:13 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/17 11:21:43 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*save;
	char	*savefind;

	savefind = to_find;
	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			save = str;
			while (*str && *to_find && *str == *to_find)
			{
				str++;
				to_find++;
			}
			if (*to_find == '\0')
				return (save);
			to_find = savefind;
			str = save;
		}
		str++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
    // Take any two strings
    char s1[] = "GeeksfofGeeks";
    char s2[] = "sfof";
    char* p;

    // Find first occurrence of s2 in s1
    p = ft_strstr(s1, s2);

    // Prints the result
    if (p) {
        printf("String found\n");
        printf("First occurrence of string '%s' in '%s' is "
               "'%s'",
               s2, s1, p);
    }
    else
        printf("String not found\n");

    return 0;
}
*/

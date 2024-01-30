/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:46:43 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/17 11:18:59 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*save;

	save = dest;
	i = 0;
	while (*dest)
		dest++;
	while (*src && i < nb)
	{
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';
	return (save);
}
/*#include <stdio.h>
#include <string.h>
int main()
{

   // Take any two strings
   char src[50] = "forgeeks";
   char dest1[50] = "geeks";
   char dest2[50] = "geeks";

   printf("Before strcat() function execution, ");
   printf("destination string : %s\n", dest1);

   // Appends the entire string of src to dest1
   strcat(dest1, src);

   // Prints the string
   printf("After strcat() function execution, ");
   printf("destination string : %s\n", dest1);

   printf("Before strncat() function execution, ");
   printf("destination string : %s\n", dest2);

   // Appends 3 characters from src to dest2
   ft_strncat(dest2, src, 5);

   // Prints the string
   printf("After strncat() function execution, ");
   printf("destination string : %s\n", dest2);

   return 0;
}*/

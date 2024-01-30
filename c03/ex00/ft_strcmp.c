/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:36:34 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/16 12:36:39 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if ((!(*s1) && *s2) || (*s1 && !*s2))
	  return (*s1 - *s2);
	return (0);
}
/*
#include <stdio.h>
int main() {
  char str1[] = "abce", str2[] = "abCd", str3[] = "azcd", str4[] = "abcea";
  int result;

  // comparing strings str1 and str2
  result = ft_strcmp(str1, str2);
  printf("ft_strcmp(str1, str2,2) = %d\n", result);

  // comparing strings str1 and str3
  result = ft_strcmp(str1, str3);
  printf("ft_strcmp(str1, str3,2) = %d\n", result);

  result = ft_strcmp(str1, str4);
  printf("ft_strcmp(str1, str4,2) = %d\n", result);

  return 0;
}*/

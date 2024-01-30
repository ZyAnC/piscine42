/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 15:38:49 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/21 11:00:00 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main() {

     char dest[22];

     for(unsigned int i = 0;i<2;i++)
     {
          printf("%c" ,ft_strncpy(dest,"abcd",2)[i]);
          if(ft_strncpy(dest,"abcd",12)[i] =='\0')
          {
              printf("g");
          }
     }

}
*/

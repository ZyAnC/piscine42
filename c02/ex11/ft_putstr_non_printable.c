/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:57:55 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/15 13:58:04 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	hexadecimals(unsigned char c)
{
	putchar("0123456789abcdef"[c / 16]);
	putchar("0123456789abcdef"[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str > 31 && *str < 127)
		{
			putchar(*str);
		}
		else
		{
			putchar('\\');
			hexadecimals(*str);
		}
		str++;
	}
}
/*int main()
{
	char a[]="Couc\2ou\ntu vas bien ?";
	ft_putstr_non_printable(a);

}*/

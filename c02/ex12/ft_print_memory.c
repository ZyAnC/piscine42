/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:58:42 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/14 17:58:46 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	hexadecimals(unsigned char c)
{
	char	hex[16];
	int		i;

	i = 0;
	while (i < 10)
	{
		hex[i] = i + '0';
		i++;
	}
	while (i < 16)
	{
		hex[i] = (i - 10) + 'a';
		i++;
	}
	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}

void	ft_print_address(void *ptr)
{
	uintptr_t	address;
	int			i;

	i = 7;
	address = (uintptr_t)ptr;
	while (i >= 0)
	{
		hexadecimals(address);
		address /= 16;
		--i;
	}
	write(1, ": ", 2);
}

void	ft_printhex(char *letter, unsigned int a, unsigned int size)
{
	unsigned int	b;

	b = 0;
	while (b < 16)
	{
		if ((a + b) < size)
		{
			hexadecimals(letter[a + b]);
		}
		else
		{
			write(1, "  ", 2);
		}
		if (b % 2 == 1)
		{
			write(1, " ", 2);
		}
		b++;
	}
}

void	ft_printhletter(char *letter, unsigned int a, unsigned int size)
{
	unsigned int	b;

	b = 0;
	while (b < 16 && (a + b) < size)
	{
		if (letter[a + b] >= 32 && letter[a + b] <= 126)
		{
			write(1, &letter[a + b], 1);
		}
		else
		{
			write(1, ".", 1);
		}
		b++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char			*letter;
	unsigned int	a;

	letter = (char *)addr;
	a = 0;
	while (a < size)
	{
		ft_print_address((char *)&addr[a]);
		ft_printhex(letter, a, size);
		ft_printhletter(letter, a, size);
		write(1, "\n", 1);
		a += 16;
	}
	return (0);
}
/*
int main (void){

  char  te[51]="Bonjour les aminches\n\n\nches\n\n\nc\n est fou.tout.ce qu";
ft_print_memory(te,51);

}*/

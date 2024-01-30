/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:57:04 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/21 10:56:40 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	uppercase(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z'
		&& (str[i - 1] < '0' || str[i - 1] > '9'))
	{
		str[i] = str[i] - 32;
	}
}

void	lowercase(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
	{
		str[i] = str[i] + 32;
	}
}

int	upperorlower(char *str, int i, int end)
{
	if (end)
	{
		uppercase(str, i);
		end = 0;
	}
	else
	{
		lowercase(str, i);
	}
	return (end);
}

int	checkalpha(char a)
{
	if (a >= 'a' && a <= 'z')
	{
		return (1);
	}
	if (a >= 'A' && a <= 'Z')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	end;

	i = 0;
	end = 1;
	while (str[i] != '\0')
	{
		if (checkalpha(str[i]))
		{
			end = upperorlower(str, i, end);
		}
		else
		{
			if (str[i] >= '0' && str[i] <= '9')
				if (str[i + 1] >= 'A' && str[i + 1] <= 'Z')
					lowercase(str, i + 1);
			end = 1;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main(){
	char a[]="salut, comment tu vas ? 42Mots quarante-deux; cinquante+et+un";
printf("%s\n",ft_strcapitalize(a));

}*/

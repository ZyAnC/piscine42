/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:47:58 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/14 17:48:00 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checkalpha(char a)
{
	if (a >= 'A' && a <= 'Z')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(checkalpha(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

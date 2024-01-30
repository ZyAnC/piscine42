/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:44:46 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/14 17:44:48 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checkalpha(char a)
{
	if (a >= 'a' && a <= 'z')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_lowercase(char *str)
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

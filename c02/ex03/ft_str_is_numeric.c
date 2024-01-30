/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:33:55 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/14 17:37:40 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checkalpha(char a)
{
	if (a >= '0' && a <= '9')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
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

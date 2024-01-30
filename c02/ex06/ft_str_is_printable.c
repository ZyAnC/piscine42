/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:51:13 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/14 17:51:17 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checkalpha(char a)
{
	if (a >= ' ' && a <= '~')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
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

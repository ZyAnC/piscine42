/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:48:09 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/29 16:48:17 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../librarys/bsq.h"

char	**ft_new_str_array(unsigned int n1, unsigned int n2)
{
	unsigned int	i;
	char			**array;

	i = 0;
	array = (char **)malloc(n1 * sizeof(char *));
	ft_assert(array != NULL, "Allocation failed on ft_new_str_array()\n");
	while (i < n1)
		array[i++] = ft_new_str(n2);
	return (array);
}

void	ft_print_str_array(char **matrix, unsigned int n1, unsigned int n2)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	k = 0;
	while (i < n1)
	{
		k = 0;
		while (k < n2)
		{
			ft_putchar(matrix[i][k]);
			k++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	*ft_new_array(int n)
{
	int	*array;

	array = (int *)malloc(n * sizeof(int));
	ft_assert(array != NULL, "Allocation failed on ft_new_array()\n");
	return (array);
}

char	*ft_remalloc(char *str, int size)
{
	char	*copy;

	copy = ft_new_str(size);
	ft_assert(copy != NULL, NULL);
	copy[size - 1] = '\0';
	copy = ft_strcpy(copy, str);
	free(str);
	return (copy);
}

int	ft_natoi(char *number, int n)
{
	int	res;
	int	i;

	i = 0;
	res = 0;
	while (is_digit(number[i]) && i < n)
		res = res * 10 + number[i++] - '0';
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:05:09 by yzheng            #+#    #+#             */
/*   Updated: 2024/01/30 19:05:10 by yzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	plus(int a, int b);
void	sub(int a, int b);
void	mul(int a, int b);
void	div(int a, int b);
void	mod(int a, int b);
int		ft_atoi(char *str);

#endif

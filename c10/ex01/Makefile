# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yzheng <yzheng@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/29 20:14:09 by yzheng            #+#    #+#              #
#    Updated: 2024/01/29 20:14:11 by yzheng           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


DIRSRC		= src/

SRCS		= ${DIRSRC}ft_cat.c

OBJS		= ${SRCS:.c=.o}

NAME		= ft_cat

CC			= gcc -Wall -Wextra -Werror
RM			= rm -f

.c.o:
				${CC} -c $< -o ${<:.c=.o}
${NAME}:	${OBJS}
					${CC} -o ${NAME} ${OBJS}
all:		${NAME}

clean:
			${RM} ${OBJS}
fclean:		clean
				${RM} ${NAME}

.PHONY:		clean fclean  all

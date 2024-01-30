DIRSRC		= srcs/

SRCS		= ${DIRSRC}main.c

OBJS		= ${SRCS:.c=.o}

NAME		= ft_display_file

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

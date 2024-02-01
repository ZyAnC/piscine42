DIRSRC		= src/
SR			= calculate.c	ft_atoi.c	ft_putnbr.c	main.c
SRC			= ${addprefix ${DIRSRC}, ${SR}}

OBJS		= ${SRC:.c=.o}
HEAD		= ./includes/
NAME		= do-op

CC			= gcc -Wall -Wextra -Werror
RM			= rm -f

.c.o:
			${CC} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
					${CC} -o ${NAME} ${OBJS}
all:		${NAME}

clean:
			${RM} ${OBJS}
fclean:		clean
				${RM} ${NAME}

.PHONY:		clean fclean  all

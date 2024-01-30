PROGRAM = bsq
CFLAGS = -Wall -Wextra -Werror
HEADER_DIR = librarys
OBJECT_DIR = srcs

FILES = array_function.c bsq_solution.c general.c matrix_function.c parse_file_map.c parse_file_overall.c string_function.c solvehelp.c
OBJECTS = $(addprefix $(OBJECT_DIR)/, $(FILES:.c=.o))

.PHONY: all clean fclean re

all: $(PROGRAM)

$(OBJECT_DIR)/%.o : %.c
					cc $(CFLAGS) -c $< -o $@ -I $(HEADER_DIR)
									
$(PROGRAM): $(OBJECTS)
					cc $(CFLAGS) main.c -o $(PROGRAM) $(OBJECTS)

clean:
					rm -f $(OBJECTS)

fclean:
					rm -f $(PROGRAM)

re: fclean all

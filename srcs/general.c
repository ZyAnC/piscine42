#include "../librarys/bsq.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_error(char *errorinfo)
{
	write(STDERR_FILENO, errorinfo, ft_strlen(errorinfo));
}

void	ft_assert(int condition, char *errorinfo)
{
	if (!condition)
	{
		if (errorinfo != NULL)
			ft_print_error(errorinfo);
		exit(EXIT_FAILURE);
	}
}

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int is_printable(unsigned char c)
{
	return (c >= 32 && c <= 126);
}

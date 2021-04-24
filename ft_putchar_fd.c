#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	unsigned int	ch;

	ch = c;
	write(fd, &ch, 1);
}

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t	mem;

	mem = (count * size);
	p = malloc(mem);
	if (p == 0)
		return (0);
	ft_bzero(p, mem);
	return (p);
}

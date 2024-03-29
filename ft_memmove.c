#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;
	size_t			n;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (src == dst)
		return (dst);
	if (dst > src)
	{
		n = len;
		while (n-- > 0)
			dest[n] = source[n];
	}
	else
	{
		n = 0;
		while (len > n)
		{
			dest[n] = source[n];
			n++;
		}
	}
	return (dst);
}

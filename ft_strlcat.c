#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	size;
	size_t	n;

	size = 0;
	while (dst[size] != '\0' && size < dstsize)
		size++;
	n = size;
	while (src[size - n] && (size + 1) < dstsize)
	{
		dst[size] = src[size - n];
		size++;
	}
	if (n < dstsize)
		dst[size] = '\0';
	return (n + (ft_strlen(src)));
}

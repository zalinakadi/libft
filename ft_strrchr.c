#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)s;
	while (str[i])
		i++;
	if (c == 0)
		return (str + i);
	while (i-- > 0)
	{
		if (str[i] == c)
			return (str + i);
	}
	return (0);
}

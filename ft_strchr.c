#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)s;
	while (s[i])
	{
		if (s[i] == c)
			return (str + i);
		i++;
	}
	if (s[i] == '\0' && c == '\0')
		return (str + i);
	return (0);
}

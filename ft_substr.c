#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned char	i;

	str = (char *)malloc(len + 1);
	if (!s || !str)
		return (0);
	i = 0;
	if (start < ft_strlen(s) + 1)
	{
		while (i < len && s[start + 1])
		{
			str[i] = s[start + i];
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}

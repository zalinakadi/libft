#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;
	int		length;

	i = 0;
	length = ft_strlen(s1);
	s2 = (char *)malloc(sizeof(char) * (length + 1));
	if (!s2)
		return (0);
	while (i <= length)
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}

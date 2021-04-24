#include "libft.h"

static int	in_set(char c, const char *set)
{
	while (*set)
	{
		if (*set++ == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		n;

	i = 0;
	if (s1 == NULL)
		return (NULL);
	n = ft_strlen(s1) - 1;
	while (in_set(s1[i], set))
		i++;
	if (i == ft_strlen(s1))
		return (ft_substr("", 0, 1));
	while (in_set(s1[n], set))
		n--;
	return (ft_substr(s1, i, (n - i) + 1));
}

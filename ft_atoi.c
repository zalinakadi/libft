#include "libft.h"

int	ft_atoi(const char *str)
{
	long long	num;
	int			i;
	int			sign;

	num = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = 10 * num + (str[i] - '0') * sign;
		i++;
		if (num > 0 && sign < 0)
			return (0);
		if (num < 0 && sign > 0)
			return (-1);
	}
	return (num);
}

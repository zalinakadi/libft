/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eproveme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:18:44 by eproveme          #+#    #+#             */
/*   Updated: 2020/11/05 16:42:11 by eproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

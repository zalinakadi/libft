/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eproveme <eproveme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 12:05:08 by eproveme          #+#    #+#             */
/*   Updated: 2020/12/08 20:13:49 by eproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

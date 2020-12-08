/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eproveme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 17:08:45 by eproveme          #+#    #+#             */
/*   Updated: 2020/11/10 16:42:33 by eproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned char	i;

	if (!s)
		return (0);
	if (!(str = (char *)malloc(len + 1)))
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

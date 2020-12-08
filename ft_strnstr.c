/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eproveme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 14:47:46 by eproveme          #+#    #+#             */
/*   Updated: 2020/11/09 14:33:23 by eproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t h;
	size_t n;

	h = 0;
	if (ft_strlen((char *)needle) == 0)
		return ((char *)haystack);
	while (haystack[h])
	{
		n = 0;
		while (needle[n] && h + n < len && needle[n] == haystack[h + n])
			n++;
		if (needle[n] == '\0')
			return ((char *)haystack + h);
		h++;
	}
	return (0);
}

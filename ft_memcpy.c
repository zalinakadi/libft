/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eproveme <eproveme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 14:59:44 by eproveme          #+#    #+#             */
/*   Updated: 2020/12/08 20:12:50 by eproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;
	size_t			i;

	i = 0;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (dst && src)
		return (dst);
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}

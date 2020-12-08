/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eproveme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 17:02:29 by eproveme          #+#    #+#             */
/*   Updated: 2020/11/07 15:59:11 by eproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t	mem;

	mem = (count * size);
	p = malloc(mem);
	if (p == 0)
		return (0);
	ft_bzero(p, mem);
	return (p);
}

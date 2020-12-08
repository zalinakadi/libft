/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eproveme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 16:12:22 by eproveme          #+#    #+#             */
/*   Updated: 2020/11/10 12:26:43 by eproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;
	int		length;

	i = 0;
	length = ft_strlen(s1);
	if (!(s2 = ((char *)malloc(sizeof(char) * (length + 1)))))
		return (0);
	while (i <= length)
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}

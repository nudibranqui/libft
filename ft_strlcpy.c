/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:05:49 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/09/22 16:13:34 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	r;

	i = 0;
	r = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while ((src[i] != '\0') && (i < (dstsize -1)))
	{
		dst[r] = src[i];
		r++;
		i++;
	}
	dst[r] = '\0';
	return (ft_strlen(src));
}

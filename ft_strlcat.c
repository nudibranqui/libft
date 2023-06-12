/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:03:35 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/12/11 13:15:54 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	r;
	size_t	s;

	i = ft_strlen(dst);
	s = ft_strlen(src);
	r = 0;
	if (dstsize <= i)
		return (dstsize + s);
	while (src[r] != '\0' && r < dstsize - i - 1)
	{
		dst[i + r] = src[r];
		r++;
	}
	dst[i + r] = '\0';
	return (i + s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:24:25 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/09/21 17:06:58 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	unsigned const char	*s;

	d = dst;
	s = src;
	i = 0;
	if (d == s)
		return (dst);
	while (i < n)
	{		
		d[i] = s[i];
		i++;
	}
	return (dst);
}

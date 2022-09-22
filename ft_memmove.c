/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:07:44 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/09/22 10:04:59 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (src == dst)
		return (dst);
	else if (src > dst)
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned const char *)src)[i];
			i++;
		}
	}
	else
	{
		while (len-- > 0)
		{
		((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	return (dst);
}	

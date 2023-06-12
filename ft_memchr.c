/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:32:43 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/12/11 13:14:22 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	t;

	str = (unsigned char *)s;
	t = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == t)
			return (&str[i]);
		i++;
	}
	return (NULL);
}	
/*
int	main(void)
{
	printf ("%s\n", memchr("hola amic", 109, 100));
	printf ("%s\n", ft_memchr("hola amic", 109, 100));
	return (0);
}*/

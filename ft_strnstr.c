/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:01:13 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/12/11 12:57:36 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	if (!*needle)
		return ((char *) haystack);
	while (haystack[x] != '\0' && x < len)
	{
		i = 0;
		if (haystack[x] == needle[i])
		{
			while (haystack[x + i] == needle[i] && needle[i] != '\0'
				&& (x + i) < len)
			{
				i++;
			}
			if (needle[i] == '\0')
				return ((char *) haystack + x);
		}
			x++;
	}
	return (NULL);
}

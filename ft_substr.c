/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:51:27 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/11/09 15:51:42 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str2;

	i = 0;
	if (!*s || start > ft_strlen(s))
	{
		str2 = (char *)malloc(sizeof(char) * (1));
		if (!str2)
			return (NULL);
		str2[0] = '\0';
		return (str2);
	}
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	str2 = (char *)malloc(sizeof(char) * (len + 1));
	if (!str2)
		return (NULL);
	while (s[start] != '\0' && i < len)
	{
		str2[i] = s[start];
		start++;
		i++;
	}
	str2[i] = '\0';
	return (str2);
}

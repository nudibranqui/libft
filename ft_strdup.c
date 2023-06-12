/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:41:34 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/11/09 15:49:48 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	char	*s;
	size_t	i;
	size_t	len;

	s = (char *) s1;
	len = ft_strlen(s1);
	p = (char *) malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (i < len && s[i] != '\0')
	{
		p[i] = s[i];
		i++;
	}	
	p[i] = '\0';
	return (p);
}

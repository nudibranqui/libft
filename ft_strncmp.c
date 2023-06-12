/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:05:57 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/12/11 13:16:42 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((str1[i] == str2[i] && i < (n - 1))
		&& (str1[i] != '\0' || str2[i] != '\0'))
		i++;
	return (str1[i] - str2[i]);
}
/*
int main(void)
{
	const char *s1 = "hola";
	const char *s2 = "holo";
	printf("diferencia %i\n", ft_strncmp(s1, s2, 4));
	return(0);		
}*/

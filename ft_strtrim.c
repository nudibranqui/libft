/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:12:25 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/11/24 16:35:40 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*trim;
	unsigned int	i;
	unsigned int	z;

	i = 0;
	z = (ft_strlen(s1)-1);
	if (!s1 || !set)
		return (NULL);
	if (!*s1)
		return (ft_strdup(""));
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (z > i && ft_strchr(set, s1[z]))
		z--;
	trim = ft_substr(s1, i, z - i + 1);
	if (!trim)
		return (NULL);
	return (trim);
}
/*
int	main (void)
{
	printf ("%s", ft_strtrim ("lllhello worldll", 's'));

}
*/

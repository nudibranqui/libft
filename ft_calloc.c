/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:44:11 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/11/09 15:53:01 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*mem;

	i = 0;
	mem = malloc(count * size);
	if (mem == NULL)
		return (NULL);
	while (i < (count * size))
	{
		((unsigned char *)mem)[i] = 0;
		i++;
	}
	return (mem);
}

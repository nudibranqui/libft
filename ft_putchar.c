/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:21:37 by aurue-lo          #+#    #+#             */
/*   Updated: 2023/03/02 20:15:23 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putchar(char c, int *count)
{
	if (write(1, &c, 1) == ERROR)
	{
		*count = -1;
		return (*count);
	}
	*count += 1;
	return (*count);
}

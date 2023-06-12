/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:37:10 by aurue-lo          #+#    #+#             */
/*   Updated: 2023/03/02 20:16:21 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_ulong(unsigned long n, int *count)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
	{
		if (ft_ulong(n / 16, count) == ERROR)
			return (*count);
	}
	if (ft_putchar(base[n % 16], count) == ERROR)
		return (*count);
	return (*count);
}

int	ft_putptr(unsigned long n, int *count)
{
	if (ft_putstr("0x", count) == ERROR)
		return (*count);
	if (ft_ulong(n, count) == ERROR)
		return (*count);
	return (*count);
}

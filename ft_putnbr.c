/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:32:06 by aurue-lo          #+#    #+#             */
/*   Updated: 2023/06/12 14:59:39 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	negnum(int n, int *count)
{
	if (n == -2147483648)
	{
		if (ft_putstr("-2147483648", count) == ERROR)
			return (*count);
	}
	else
	{
		if (n < 0)
		{
			n *= -1;
			if (ft_putchar('-', count) == ERROR)
				return (*count);
		}
		if (ft_putnbr(n, 1, 10, count) == ERROR)
			return (*count);
	}
	return (*count);
}

int	ft_putnbr(unsigned int n, int opt, unsigned int bas, int *count)
{
	char	*base;

	if (opt == 1)
		base = "0123456789";
	if (opt == 2)
		base = "0123456789ABCDEF";
	if (opt == 3)
		base = "0123456789abcdef";
	if (n >= bas)
	{
		if (ft_putnbr(n / bas, opt, bas, count) == ERROR)
			return (*count);
	}
	if (ft_putchar(base[n % bas], count) == ERROR)
		return (*count);
	return (*count);
}

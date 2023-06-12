/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:53:28 by aurue-lo          #+#    #+#             */
/*   Updated: 2023/03/02 20:40:17 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	type(va_list arg, char const flag, int *count)
{
	if (flag == '%')
		ft_putchar('%', count);
	else if (flag == 'c')
		ft_putchar(va_arg(arg, int), count);
	else if (flag == 's')
		ft_putstr(va_arg(arg, char *), count);
	else if (flag == 'i' || flag == 'd')
		negnum(va_arg(arg, int), count);
	else if (flag == 'u')
		ft_putnbr(va_arg(arg, unsigned int), 1, 10, count);
	else if (flag == 'X')
		ft_putnbr(va_arg(arg, unsigned int), 2, 16, count);
	else if (flag == 'x')
		ft_putnbr(va_arg(arg, unsigned int), 3, 16, count);
	else if (flag == 'p')
		ft_putptr(va_arg(arg, unsigned long), count);
	return (*count);
}

int	check(va_list arg, char const *str, int *count)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (type(arg, str[i + 1], count) == ERROR)
				return (ERROR);
			i++;
		}
		else
			if (ft_putchar(str[i], count) == ERROR)
				return (ERROR);
		i++;
	}
	return (*count);
}

int	ft_printf(char const *str, ...)
{
	int		count;
	va_list	arg;

	count = 0;
	va_start(arg, str);
	if (check(arg, str, &count) == ERROR)
		return (ERROR);
	va_end(arg);
	return (count);
}

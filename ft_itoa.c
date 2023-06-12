/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 22:27:58 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/12/10 23:42:48 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long n)
{
	int	cont;

	cont = 1;
	while (n > 9)
	{
		n = n / 10;
		cont++;
	}
	return (cont);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		l;
	int		d;
	long	nb;

	nb = n;
	d = 0;
	if (nb < 0)
		d = 1;
	if (nb < 0)
		nb = -nb;
	l = ft_len(nb) + d;
	num = malloc ((l + 1) * sizeof(char));
	if (!num)
		return (NULL);
	num[l] = '\0';
	while (l-- > 0)
	{
		num[l] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (d == 1)
		num[0] = '-';
	return (num);
}

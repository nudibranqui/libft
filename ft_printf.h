/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:49:14 by aurue-lo          #+#    #+#             */
/*   Updated: 2023/06/12 14:58:53 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

# define ERROR -1

int	ft_putchar(char c, int *count);
int	ft_putstr(char *str, int *count);
int	ft_putnbr(unsigned int n, int opt, unsigned int bas, int *count);
int	ft_printf(char const *str, ...);
int	ft_putptr(unsigned long n, int*count);
int	negnum(int n, int *count);

#endif

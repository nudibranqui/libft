/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurue-lo <aurue-lo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 16:58:49 by aurue-lo          #+#    #+#             */
/*   Updated: 2022/12/11 13:15:25 by aurue-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_contador(char const *s, char c)
{
	int	i;
	int	cont;
	int	bolea;

	i = 0;
	cont = 0;
	bolea = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && bolea == 0)
			cont++;
		if (s[i] != c)
				bolea = 1;
		else
			bolea = 0;
		i++;
	}
	return (cont);
}

static void	*ft_free(char **s, int np)
{
	while (np--)
		free(s[np]);
	free(s);
	return (NULL);
}

static char const	*ft_ahorro(char const *s, char c)
{
	while (*s == c)
		s++;
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char	**total;
	int		nl;
	int		np;

	total = (char **)malloc((ft_contador(s, c) + 1) * sizeof(char **));
	if (!total)
		return (NULL);
	np = 0;
	while (*s)
	{
		s = ft_ahorro(s, c);
		nl = 0;
		while (s[nl] != c && s[nl] != '\0')
			nl++;
		if (nl)
		{
			total[np] = ft_substr(s, 0, nl);
			if (total[np++] == NULL)
				return (ft_free(total, np));
			s += nl;
		}
	}
	total[np] = NULL;
	return (total);
}

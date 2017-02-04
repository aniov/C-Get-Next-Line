/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 16:39:02 by mvoina            #+#    #+#             */
/*   Updated: 2015/11/15 13:51:18 by mvoina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_size(int n)
{
	int				size;
	unsigned int	nr;

	size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		nr = -n;
		size++;
	}
	else
		nr = n;
	while (nr > 0)
	{
		nr = nr / 10;
		size++;
	}
	return (size);
}

static char			*str(int size)
{
	char			*s;

	s = (char*)malloc((size + 1) * sizeof(char));
	if (s == 0)
		return (0);
	return (s);
}

char				*ft_itoa(int n)
{
	char			*s;
	int				i;
	unsigned int	nr;

	s = str(ft_size(n));
	i = ft_size(n);
	s[i--] = '\0';
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		nr = -n;
		s[0] = '-';
	}
	else
		nr = n;
	while (nr > 0)
	{
		s[i] = nr % 10 + '0';
		nr = nr / 10;
		i--;
	}
	return (s);
}

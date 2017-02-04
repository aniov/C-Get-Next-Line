/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 16:39:02 by mvoina            #+#    #+#             */
/*   Updated: 2015/11/15 14:27:22 by mvoina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*d;
	char	*s;
	size_t	n;
	size_t	len;

	d = dst;
	s = (char*)src;
	n = size;
	while (n > 0 && *d != '\0')
	{
		n--;
		d++;
	}
	if (n == 0)
		return (ft_strlen(src) + size);
	len = size - n;
	while (n > 1 && *s != 0)
	{
		*d++ = *s++;
		n--;
	}
	*d = '\0';
	return (size_t)(ft_strlen(src) + len);
}

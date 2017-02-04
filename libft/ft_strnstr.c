/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 15:36:58 by mvoina            #+#    #+#             */
/*   Updated: 2015/11/15 14:35:49 by mvoina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int i;
	int j;
	int k;
	int nn;

	i = 0;
	j = 0;
	nn = n;
	if (*s2 == '\0')
		return ((char*)s1);
	while (s1[i] != '\0' && s2[j] != '\0' && nn >= 0)
	{
		k = i;
		while (s1[i++] == s2[j++] && nn >= 0)
		{
			nn--;
			if (s2[j] == '\0' && nn >= 0)
				return ((char*)(s1 + k));
		}
		j = 0;
		i = k + 1;
		nn = n - i;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 16:39:02 by mvoina            #+#    #+#             */
/*   Updated: 2015/11/15 14:07:41 by mvoina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;
	char	*de;
	char	*se;
	size_t	size;

	de = dest;
	se = (char*)src;
	size = 0;
	temp = (char*)malloc(n * sizeof(char));
	if (temp == 0)
		return (0);
	while (size < n)
	{
		temp[size] = se[size];
		size++;
	}
	size = 0;
	while (size < n)
	{
		de[size] = temp[size];
		size++;
	}
	free(temp);
	return (dest);
}

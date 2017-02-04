/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 16:39:02 by mvoina            #+#    #+#             */
/*   Updated: 2015/11/15 14:26:09 by mvoina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;

	str = 0;
	i = 0;
	if (s1 == 0 || s2 == 0)
		return (0);
	str = (char*)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (str == 0)
		return (0);
	while (*s1 != '\0')
		str[i++] = *s1++;
	while (*s2 != '\0')
		str[i++] = *s2++;
	str[i] = '\0';
	return (str);
}

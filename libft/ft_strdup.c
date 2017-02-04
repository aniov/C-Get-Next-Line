/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 16:39:02 by mvoina            #+#    #+#             */
/*   Updated: 2015/11/15 14:21:57 by mvoina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ns;
	int		i;

	i = 0;
	ns = 0;
	ns = (char*)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (ns == 0)
		return (0);
	while (s[i] != '\0')
	{
		ns[i] = s[i];
		i++;
	}
	ns[i] = '\0';
	return (ns);
}

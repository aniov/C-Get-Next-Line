/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 16:39:02 by mvoina            #+#    #+#             */
/*   Updated: 2015/11/15 14:50:15 by mvoina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_front(char const *s)
{
	size_t f;

	f = 0;
	while ((s[f] == ' ' || s[f] == '\n' || s[f] == '\t' || s[f] == ',')
			&& s[f] != '\0')
		f++;
	return (f);
}

static size_t	ft_back(char const *s)
{
	size_t b;

	b = ft_strlen(s) - 1;
	while ((s[b] == ' ' || s[b] == '\n' || s[b] == '\t' || s[b] == ',')
			&& b > 0)
		b--;
	return (b + 1);
}

char			*ft_strtrim(char const *s)
{
	char	*str;
	size_t	l;

	if (s == 0)
		return (0);
	str = 0;
	l = ft_strlen(s);
	if (ft_front(s) == ft_strlen(s) || s[0] == '\0')
		str = ft_strsub(s, 0, 0);
	else if (ft_front(s) > 0 && ft_back(s) < l)
		str = ft_strsub(s, ft_front(s), ft_back(s) - ft_front(s));
	else
		str = ft_strsub(s, 0, l);
	return (str);
}

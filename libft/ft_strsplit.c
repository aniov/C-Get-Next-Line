/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 16:39:02 by mvoina            #+#    #+#             */
/*   Updated: 2015/11/15 14:45:19 by mvoina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_words(char const *s, char c)
{
	int i;
	int wo;
	int flag;

	i = 0;
	wo = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
		{
			i++;
		}
		flag = 0;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			flag = 1;
		}
		if (flag)
			wo++;
	}
	return (wo);
}

static int	ft_letters(char const *s, char c, int i)
{
	int let;

	let = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		let++;
	}
	return (let);
}

static char	**ft_make_str(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		words;
	int		let;

	i = 0;
	j = 0;
	words = (ft_words(s, c));
	if ((str = (char**)malloc((words + 1) * sizeof(char*))) == 0)
		return (0);
	str[words] = 0;
	while (i < words)
	{
		while (s[j] == c)
			j++;
		let = ft_letters(s, c, j);
		j = j + let;
		str[i] = (char*)malloc((let + 1) * sizeof(char));
		if (str[i] == 0)
			return (0);
		str[i][let] = '\0';
		i++;
	}
	return (str);
}

static void	ft_write_str(char const *s, char c, char **str, int words)
{
	int i;
	int j;
	int len;

	i = 0;
	len = 0;
	while (i < words)
	{
		while (s[len] == c)
			len++;
		j = 0;
		while (s[len] != c && s[len] != '\0')
		{
			str[i][j] = s[len];
			j++;
			len++;
		}
		str[i][j] = '\0';
		i++;
	}
	return ;
}

char		**ft_strsplit(char const *s, char c)
{
	char **new_str;

	if (s == 0)
		return (0);
	new_str = 0;
	new_str = ft_make_str(s, c);
	ft_write_str(s, c, new_str, ft_words(s, c));
	return (new_str);
}

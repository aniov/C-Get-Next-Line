/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 16:39:02 by mvoina            #+#    #+#             */
/*   Updated: 2015/11/15 14:46:15 by mvoina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	if (*s2 == '\0')
		return ((char*)s1);
	while (s1[i] != '\0' && s2[j] != '\0')
	{
		k = i;
		while (s1[i] == s2[j])
		{
			i++;
			j++;
			if (s2[j] == '\0')
				return ((char*)(s1 + k));
		}
		j = 0;
		i = k + 1;
	}
	return (0);
}

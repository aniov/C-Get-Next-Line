/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsort_down.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 16:39:02 by mvoina            #+#    #+#             */
/*   Updated: 2015/11/15 13:39:18 by mvoina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bsort_down(int *sir, size_t size)
{
	size_t	i;
	int		t;
	int		flag;

	if (sir == 0 || size == 0)
		return ;
	i = 0;
	flag = 1;
	while (flag)
	{
		flag = 0;
		i = 0;
		while (i < size - 1)
		{
			if (sir[i] < sir[i + 1])
			{
				t = *(sir + i);
				*(sir + i) = *(sir + i + 1);
				*(sir + i + 1) = t;
				flag = 1;
			}
			i++;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 16:39:02 by mvoina            #+#    #+#             */
/*   Updated: 2015/11/15 14:10:02 by mvoina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_pow(unsigned int base, unsigned int exp)
{
	unsigned int t;

	t = base;
	if (exp == 0)
		return (1);
	while (exp > 1)
	{
		base = base * t;
		exp--;
	}
	return (base);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 15:19:06 by mvoina            #+#    #+#             */
/*   Updated: 2015/11/15 13:35:00 by mvoina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int nr;
	int sign;

	nr = 0;
	sign = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
	|| *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
	{
		sign = 1;
		str++;
	}
	else if (*str == '+')
		str++;
	while ((str) && (*str >= '0' && *str <= '9'))
	{
		nr = nr * 10 + *str - '0';
		str++;
	}
	if (sign)
		return (-nr);
	return (nr);
}

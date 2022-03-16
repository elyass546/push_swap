/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <ie-laabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:55:23 by ie-laabb          #+#    #+#             */
/*   Updated: 2022/03/13 21:24:34 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rest_nbr(const char *str, int sign, int i)
{
	long	res;
	long	num;

	res = 0;
	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = ((str[i] - '0') + (res * 10));
		if (sign == -1)
		{
			if (res / 10 != num)
				ft_error();
		}
		if (sign == 1)
		{
			if (res / 10 != num)
				ft_error();
		}
		num = (str[i++] - '0') + (num * 10);
	}
	num = num * sign;
	if (num > 2147483647 || num <= -2147483648)
		ft_error();
	return (num);
}

void	check(char *str, int i)
{
	if (!str)
		ft_error();
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			ft_error();
		i++;
	}
}

int	ft_atoi(char	*str)
{
	long	i;
	long	num;
	int		sign;

	i = 0;
	sign = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == ' '))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	check(str, i);
	num = rest_nbr(str, sign, i);
	return (num);
}

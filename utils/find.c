/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <ie-laabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:16:31 by ie-laabb          #+#    #+#             */
/*   Updated: 2022/03/12 19:52:46 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_max(t_list **lst)
{
	t_list	*tmp;
	int		index;
	int		max;
	int		i;

	i = 0;
	index = 0;
	tmp = (*lst);
	max = tmp->content;
	while (tmp)
	{
		if (tmp->content > max)
		{
			max = tmp->content;
			index = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (index);
}

int	found_min(t_list **lst)
{
	t_list	*tmp;
	int		index;
	int		min;
	int		i;

	i = 0;
	index = 0;
	tmp = (*lst);
	min = tmp->content;
	while (tmp)
	{
		if (tmp->content < min)
		{
			min = tmp->content;
			index = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (index);
}

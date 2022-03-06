/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <ie-laabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 16:20:53 by ie-laabb          #+#    #+#             */
/*   Updated: 2022/03/06 20:10:29 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

void sort4(t_list **stack1, t_list **stack2)
{
	int min;
	int size;

	min = found_min(stack1);
	size = ft_lstsize(*stack1);
	if (min < size / 2)
	{
		if (min == 1)
		{
			swap(*stack1);
			push(stack2, (*stack1)->content, "pa");
			ft_pop(stack1);
			sort3(stack1);
			push(stack1, (*stack2)->content, "pa");
			ft_pop(stack2);
		}
		else
		{
			push(stack2, (*stack1)->content, "pa");
			ft_pop(stack1);
			sort3(stack1);
			push(stack1, (*stack2)->content, "pa");
			ft_pop(stack2);
		}
	}
	if (min >= size / 2)
	{
		if (min == (size - 1))
		{
			r_rotate(stack1);
			push(stack2, (*stack1)->content, "pa");
			ft_pop(stack1);
			sort3(stack1);
			push(stack1, (*stack2)->content, "pa");
			ft_pop(stack2);
		}
		else if (min == (size / 2))
		{
			r_rotate(stack1);
			r_rotate(stack1);
			push(stack2, (*stack1)->content, "pa");
			ft_pop(stack1);
			sort3(stack1);
			push(stack1, (*stack2)->content, "pa");
			ft_pop(stack2);
		}
	}
}

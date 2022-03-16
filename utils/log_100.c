/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   log_100.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <ie-laabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:42:55 by ie-laabb          #+#    #+#             */
/*   Updated: 2022/03/12 20:25:33 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	salam(t_list **stack1, t_list **stack2, int fst, int scnd_ind)
{
	int	scnd;
	int	size;

	size = ft_lstsize(*stack1);
	scnd = 100 - scnd_ind;
	is_sorted(stack1);
	if (fst > scnd)
	{
		while (scnd > 0)
		{
			r_rotate(stack1, "rra\n");
			scnd--;
		}
	}
	else if (fst <= scnd)
	{
		while (fst > 0)
		{
			rotate(stack2, "ra\n");
			fst--;
		}
	}
	push(stack2, (*stack1)->content, "pb");
	ft_pop(stack1);
}

void	sort_100(t_list **stack1, t_list **stack2)
{
	int		fst;
	int		scnd;
	int		index;
	t_list	*temp;

	index = 0;
	temp = *stack1;
	while (temp)
	{
		if (temp->content >= 0 && temp->content <= 19)
		{
			fst = index;
			break ;
		}
		temp = temp->next;
		index++;
	}
	while (temp)
	{
		if (temp->content >= 0 && temp->content <= 19)
			scnd = index;
		temp = temp->next;
		index++;
	}
	salam(stack1, stack2, fst, scnd);
}

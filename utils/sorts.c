/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <ie-laabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 22:47:48 by ie-laabb          #+#    #+#             */
/*   Updated: 2022/03/13 13:51:44 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	sort3_helper(t_list **lst)
{
	if (((*lst)->content < (*lst)->next->content)
		&& ((*lst)->next->content > (*lst)->next->next->content)
		&& ((*lst)->content > (*lst)->next->next->content))
		r_rotate(lst, "rra\n");
	else if (((*lst)->content < (*lst)->next->content)
		&& ((*lst)->next->content > (*lst)->next->next->content)
		&& ((*lst)->content < (*lst)->next->next->content))
	{
		r_rotate(lst, "rra\n");
		swap(*lst);
	}
}

void	sort3(t_list **lst)
{
	if (((*lst)->content > (*lst)->next->content)
		&& ((*lst)->next->content > (*lst)->next->next->content))
	{
		swap(*lst);
		r_rotate(lst, "rra\n");
	}
	else if (((*lst)->content > (*lst)->next->content)
		&& ((*lst)->next->content < (*lst)->next->next->content)
		&& ((*lst)->content > (*lst)->next->next->content))
	{
		r_rotate(lst, "rra\n");
		r_rotate(lst, "rra\n");
	}
	else if (((*lst)->content > (*lst)->next->content)
		&& ((*lst)->next->content < (*lst)->next->next->content)
		&& ((*lst)->content < (*lst)->next->next->content))
		swap(*lst);
	sort3_helper(lst);
}

void	sorts_helper(t_list **stack, int size)
{
	int	min;

	min = found_min(stack);
	if (min >= (size / 2))
	{
		while (min <= (size - 1))
		{
			r_rotate(stack, "rra\n");
			min++;
		}
	}
	else
	{
		while (min != 0)
		{
			rotate(stack, "ra\n");
			min--;
		}
	}
}

void	sorts(t_list **stack1, t_list **stack2)
{
	int	i;
	int	size;
	int	hh;

	size = ft_lstsize(*stack1);
	i = 0;
	hh = size;
	while (i < hh - 3)
	{
		sorts_helper(stack1, size);
		push(stack2, (*stack1)->content, "pb");
		ft_pop(stack1);
		size--;
		i++;
	}
	sort3(stack1);
	while (hh > 3)
	{
		push(stack1, (*stack2)->content, "pa");
		ft_pop(stack2);
		hh--;
	}
}

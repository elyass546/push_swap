/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   log_500.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <ie-laabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:13:15 by ie-laabb          #+#    #+#             */
/*   Updated: 2022/03/12 19:53:19 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_first(t_list **stack1, int min, int max)
{
	t_list	*tmp;
	int		index;
	int		first;

	tmp = *stack1;
	first = -1;
	index = 0;
	while (tmp)
	{
		if (tmp->content >= min && tmp->content < (min + max))
		{
			first = index;
			break ;
		}
		index++;
		tmp = tmp->next;
	}
	return (first);
}

void	swap_s(t_list **stack1, t_list **stack2, int index, int *size)
{
	if (index > *size / 2)
	{
		while (index < *size)
		{
			r_rotate(stack1, "rra\n");
			index++;
		}
	}
	if (index <= *size / 2)
	{
		while (index > 0)
		{
			rotate(stack1, "ra\n");
			index--;
		}
	}
	push(stack2, (*stack1)->content, "pb");
	ft_pop(stack1);
}

void	push_back(t_list **stack1, t_list **stack2, int *size)
{
	t_list	*tmp;
	int		max;

	tmp = (*stack2);
	max = find_max(stack2);
	if (max > *size / 2)
	{
		while (max < *size)
		{
			r_rotate(stack2, "rrb\n");
			max++;
		}
	}
	else if (max <= *size / 2)
	{
		while (max > 0)
		{
			rotate(stack2, "rb\n");
			max--;
		}
	}
	push(stack1, (*stack2)->content, "pa");
	ft_pop(stack2);
}

void	complex_sort(t_list **stack1, t_list **stack2, int size, int chunk)
{
	int	min;
	int	max;
	int	i;

	min = 0;
	max = size / chunk;
	while (*stack1)
	{
		i = find_first(stack1, min, max);
		if (i == -1)
		{
			min = min + max;
			continue ;
		}
		swap_s(stack1, stack2, i, &size);
	}
	while (*stack2)
	{
		push_back(stack1, stack2, &size);
		size--;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <ie-laabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 17:00:18 by ie-laabb          #+#    #+#             */
/*   Updated: 2022/03/16 15:59:34 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	check_str(char *str)
{
	if (ft_strcmp("rra", str) != 0 && ft_strcmp("rrb", str) != 0
		&& ft_strcmp("rr", str) != 0 && ft_strcmp("rrr", str) != 0
		&& ft_strcmp("pa", str) != 0 && ft_strcmp("pb", str) != 0
		&& ft_strcmp("sa", str) != 0 && ft_strcmp("sb", str) != 0
		&& ft_strcmp("ra", str) != 0 && ft_strcmp("rb", str) != 0
		&& ft_strcmp("ss", str) != 0)
		ft_error();
}

void	check_help(t_list **stack1, t_list **stack2, char *str)
{
	if (ft_strcmp("rra", str) == 0)
		r_rotate(stack1);
	else if (ft_strcmp("rrb", str) == 0)
		r_rotate(stack2);
	else if (ft_strcmp("rr", str) == 0 && (*stack1) && (*stack2))
	{
		rotate(stack1);
		rotate(stack2);
	}
	else if ((ft_strcmp("pa", str) == 0) && (*stack2))
	{
		push(stack1, (*stack2)->content);
		ft_pop(stack2);
	}
	else if ((ft_strcmp("pb", str) == 0) && (*stack1))
	{
		push(stack2, (*stack1)->content);
		ft_pop(stack1);
	}
}

void	check_sort(t_list **stack1, t_list **stack2, char *str)
{
	check_str(str);
	if (ft_strcmp("sa", str) == 0)
		swap(*stack1);
	else if (ft_strcmp("sb", str) == 0)
		swap(*stack2);
	else if (ft_strcmp("ra", str) == 0)
		rotate(stack1);
	else if (ft_strcmp("rb", str) == 0)
		rotate(stack2);
	else if (ft_strcmp("rrr", str) == 0 && (*stack1) && (*stack2))
	{
		r_rotate(stack1);
		r_rotate(stack2);
	}
	else if (ft_strcmp("ss", str) == 0 && (*stack1) && (*stack2))
	{
		swap(*stack1);
		swap(*stack2);
	}
	else
		check_help(stack1, stack2, str);
}

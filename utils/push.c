/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <ie-laabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:20:47 by ie-laabb          #+#    #+#             */
/*   Updated: 2022/03/13 19:23:06 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_pop(t_list **stack)
{
	t_list	*node;

	init(&node);
	if (!stack || !*stack)
		return (0);
	node = *stack;
	*stack = (*stack)->next;
	node->next = NULL;
	free(node);
	return (*stack);
}

int	push(t_list **stack, int elem, char *str)
{
	t_list	*new;

	if (!stack)
		return (0);
	new = ft_lstnew(elem);
	if (!new)
		return (0);
	new->next = *stack;
	*stack = new;
	if (str[0] != 'n')
	{
		ft_putstr(str);
		write(1, "\n", 1);
	}
	return (1);
}

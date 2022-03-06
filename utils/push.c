/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <ie-laabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:20:47 by ie-laabb          #+#    #+#             */
/*   Updated: 2022/03/06 19:45:53 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	push(t_list	**lst, int data, char *str)
{
	t_list *new;

	if (!*lst)
	{
		if (!(*lst = ft_lstnew(data)))
			return (0);
		return (1);
	}
	if (!(new = ft_lstnew(data)))
		return(0);
	new->next = *lst;
	*lst = new;
	if (str[0] != 'n')
	{
		ft_putstr(str);
		write(1, "\n", 1);
	}
	return (1);
}

t_list	*ft_pop(t_list **stack)
{
	t_list	*node;

	node = 0;
	if (!stack || !*stack)
		return (0);
	node = *stack;
	*stack = (*stack)->next;
	node->next = NULL;
	return (node);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <ie-laabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:20:47 by ie-laabb          #+#    #+#             */
/*   Updated: 2022/03/02 18:31:28 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	push(t_list	**lst, int data)
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
	return (1);
}

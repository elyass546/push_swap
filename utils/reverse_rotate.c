/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <ie-laabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:42:04 by ie-laabb          #+#    #+#             */
/*   Updated: 2022/03/05 18:11:18 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	r_rotate(t_list **lst)
{
	t_list	*lst1;
	t_list	*tmp;

	if (!(*lst))
		return (1);
	else if ((*lst)->next == NULL)
		return (1);
	tmp = (*lst);
	lst1 = ft_lstlast(*lst);
	push(lst, lst1->content);
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	free(tmp->next);
	tmp->next = NULL;
	return (0);
}

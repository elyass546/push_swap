/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <ie-laabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:42:04 by ie-laabb          #+#    #+#             */
/*   Updated: 2022/03/13 21:34:03 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

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

int	rotate(t_list **lst)
{
	t_list	*lst_last;
	t_list	*lst_first;

	if (!*lst)
		return (1);
	lst_last = *lst;
	lst_first = (*lst)->next;
	*lst = (*lst)->next;
	ft_lstadd_back(lst, lst_last);
	return (0);
}

int	swap(t_list *lst1)
{
	int	temp;

	if (lst1 == NULL || lst1->next == NULL)
		ft_error();
	temp = lst1->content;
	lst1->content = lst1->next->content;
	lst1->next->content = temp;
	return (0);
}

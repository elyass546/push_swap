/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <ie-laabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 14:34:44 by ie-laabb          #+#    #+#             */
/*   Updated: 2022/03/04 17:34:36 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rotate(t_list **lst)
{
	t_list *lst_last;
	t_list *lst_first;

	if (!*lst)
		return (1);
	lst_last = *lst;
	lst_first = (*lst)->next;
	*lst = (*lst)->next;
	ft_lstadd_back(lst , lst_last);
	return(0);
}
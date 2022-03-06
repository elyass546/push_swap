/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <ie-laabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:16:31 by ie-laabb          #+#    #+#             */
/*   Updated: 2022/03/06 19:42:00 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void sort3_helper(t_list **lst)
{
	if (((*lst)->content < (*lst)->next->content)
		&& ((*lst)->next->content > (*lst)->next->next->content)
		&& ((*lst)->content > (*lst)->next->next->content))
		r_rotate(lst);
	else if (((*lst)->content < (*lst)->next->content)
		&& ((*lst)->next->content > (*lst)->next->next->content)
		&& ((*lst)->content < (*lst)->next->next->content))
	{
		r_rotate(lst);
		swap(*lst);
	}
}

void	sort3(t_list **lst)
{
	if (((*lst)->content > (*lst)->next->content)
		&&((*lst)->next->content > (*lst)->next->next->content))
	{
		swap(*lst);
		r_rotate(lst);
	}
	else if (((*lst)->content > (*lst)->next->content)
		&& ((*lst)->next->content < (*lst)->next->next->content)
		&& ((*lst)->content > (*lst)->next->next->content))
	{
		r_rotate(lst);
		r_rotate(lst);
	}
	else if (((*lst)->content > (*lst)->next->content)
		&& ((*lst)->next->content < (*lst)->next->next->content)
		&& ((*lst)->content < (*lst)->next->next->content))
		swap(*lst);
	sort3_helper(lst);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <ie-laabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:20:24 by ie-laabb          #+#    #+#             */
/*   Updated: 2022/03/02 18:30:49 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

void	swap(t_list *lst1)
{
	int	temp;

	if (lst1 == NULL || lst1->next == NULL)
	{
		ft_putstr("khata2\n");
		exit(1);
	}
	ft_putstr("sa\n");
	temp = lst1->content;
	lst1->content = lst1->next->content;
	lst1->next->content = temp;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <ie-laabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:04:01 by ie-laabb          #+#    #+#             */
/*   Updated: 2022/03/02 18:37:32 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int main(int ac, char **av)
{
	t_list	*lst1;
	t_list	*lst2;
	int		i;

	if (ac <= 2)
	{
		ft_putstr("Error\ntadakhal les args mazyan.\n");
		exit(1);
	}
	else
	{
		i = ac - 1;
		while(i > 0)
		{
			push(&lst1, ft_atoi(av[i]));
			i--;	
		}
		push(&lst2, ft_atoi(av[i + 1]));
		//swap(lst1);
		while(lst1)
		{
			printf("%da\n", lst1->content);
			lst1 = lst1->next;
		}
		printf("%db\n", lst2->content);
	}
}
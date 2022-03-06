/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <ie-laabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:04:01 by ie-laabb          #+#    #+#             */
/*   Updated: 2022/03/06 19:52:04 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	found_min(t_list **lst)
{
	int	min;
	t_list *tmp;
	int index;
	int		i;

	i = 0;
	index = 0;
	tmp = (*lst);
	min = tmp->content;
	while (tmp)
	{
		if (tmp->content < min)
		{
			min = tmp->content;
			index = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (index);
}

void	sort(t_list **stack1, t_list **stack2, int ac)
{
	if (ac == 4)
		sort3(stack1);
	else if (ac == 5)
		sort4(stack1, stack2);
	// else if (ac == 6)
	// 	asdf;
}

void	init(t_list **lst)
{
	*lst = NULL;
}
int main(int ac, char **av)
{
	t_list	*lst1;
	t_list	*lst2;
	int		i;

	if (ac < 2)
	{
		ft_putstr("Error\ntadakhal les args mazyan.\n");
		exit(1);
	}
	else
	{
		init(&lst1);
		init(&lst2);
		i = ac - 1;
		while(i > 0)
		{
			push(&lst1, ft_atoi(av[i]), "n");
			i--;
		}
		if (ac <= 6)
			sort(&lst1, &lst2, ac);
		while (lst1)
		{
			printf("stack a : %d\n", lst1->content);
			lst1 = lst1->next;
		}
		while (lst2)
		{
			printf("stack b : %d\n", lst2->content);
			lst2 = lst2->next;
		}
	}
}
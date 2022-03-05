/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <ie-laabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:04:01 by ie-laabb          #+#    #+#             */
/*   Updated: 2022/03/05 22:36:36 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	found_min(t_list *lst)
{
	int	min;
	int index;
	int		i;

	i = 0;
	index = 0;
	min = lst->content;
	while (lst)
	{
		if (lst->content < min)
		{
			min = lst->content;
			index = i;
		}
		lst = lst->next;
		i++;
	}
	return (index);
}

void	sort3_helper(t_list **lst)
{
	if (((*lst)->content < (*lst)->next->content)
		&& ((*lst)->next->content > (*lst)->next->next->content)
		&& ((*lst)->content > (*lst)->next->next->content))
	{
		ft_putstr("rra\n");
		r_rotate(lst);
	}
	else if (((*lst)->content < (*lst)->next->content)
		&& ((*lst)->next->content > (*lst)->next->next->content)
		&& ((*lst)->content < (*lst)->next->next->content))
	{
		ft_putstr("rra\n");
		r_rotate(lst);
		ft_putstr("sa\n");
		swap(*lst);
	}
}

void	sort3(t_list **lst)
{
	if (((*lst)->content > (*lst)->next->content)
		&&((*lst)->next->content > (*lst)->next->next->content))
	{
		ft_putstr("sa\n");
		swap(*lst);
		ft_putstr("rra\n");
		r_rotate(lst);
	}
	else if (((*lst)->content > (*lst)->next->content)
		&& ((*lst)->next->content < (*lst)->next->next->content)
		&& ((*lst)->content > (*lst)->next->next->content))
	{
		ft_putstr("rra\n");
		ft_putstr("rra\n");
		r_rotate(lst);
		r_rotate(lst);
	}
	else if (((*lst)->content > (*lst)->next->content)
		&& ((*lst)->next->content < (*lst)->next->next->content)
		&& ((*lst)->content < (*lst)->next->next->content))
	{
		ft_putstr("sa\n");
		swap(*lst);
	}
	sort3_helper(lst);
}

int main(int ac, char **av)
{
	t_list	*lst1;
	int		i;
	int	index;

	if (ac < 2)
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
		// if (ac == 4)
		// 	sort3(&lst1);
		// while (lst1)
		// {
		// 	printf("%d\n", lst1->content);
		// 	lst1 = lst1->next;
		// }
		index = found_min(lst1);
		printf("index -> %d\n",index);
	}
}
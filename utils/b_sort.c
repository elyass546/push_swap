/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <ie-laabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:52:46 by ie-laabb          #+#    #+#             */
/*   Updated: 2022/03/12 19:18:02 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

void	index_stack(int *a, t_list **stack1, int size)
{
	int		i;
	t_list	*stack;

	stack = *stack1;
	while (stack)
	{
		i = 0;
		while (i < size)
		{
			if (a[i] == (stack)->content)
			{
				(stack)->content = i;
				break ;
			}
			i++;
		}
		(stack) = (stack)->next;
	}
}

int	*tab_swap(int length, int *tab)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < length)
	{
		j = 0;
		while (j < (length - 1))
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
	return (tab);
}

void	b_sort(t_list **stack)
{
	int		length;
	int		i;
	int		*tab;
	t_list	*tmp2;

	tmp2 = (*stack);
	i = 0;
	length = ft_lstsize(*stack);
	tab = (int *)malloc(sizeof(int *) * length);
	while (i < length)
	{
		tab[i] = tmp2->content;
		i++;
		tmp2 = tmp2->next;
	}
	tmp2 = (*stack);
	tab = tab_swap(length, tab);
	index_stack(tab, stack, length);
	free(tab);
}

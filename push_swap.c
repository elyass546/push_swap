/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <ie-laabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:04:01 by ie-laabb          #+#    #+#             */
/*   Updated: 2022/03/16 15:59:14 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_list **stack1, t_list **stack2, int ac)
{
	if (ac == 3)
	{
		if ((*stack1)->content > (*stack1)->next->content)
			swap(*stack1);
	}
	else if (ac == 4)
		sort3(stack1);
	else if (ac < 100)
		sorts(stack1, stack2);
	else if (ac < 500)
	{
		b_sort(stack1);
		complex_sort(stack1, stack2, ft_lstsize(*stack1), 7);
	}
	else if (ac >= 500)
	{
		b_sort(stack1);
		complex_sort(stack1, stack2, ft_lstsize(*stack1), 12);
	}
}

void	init(t_list **lst)
{
	*lst = NULL;
}

void	check_duplicat(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				ft_error();
			j++;
		}
		i++;
	}
}

void	ft_digit(int ac, char **av)
{
	int	i;
	int	j;

	j = 0;
	i = ac - 1;
	while (i > 0)
	{
		if ((av[i][j] >= 48 && av[i][j] <= 57)
			|| (av[i][j] == '-' || av[i][j] == '+'))
		{
			if (av[i][j] == '-' || av[i][j] == '+')
			{
				if (ft_isdigit(av[i][j + 1]) == 0)
					ft_error();
			}
			i--;
		}
		else
			ft_error();
	}
}

int	main(int ac, char **av)
{
	t_list	*lst1;
	t_list	*lst2;
	int		i;

	if (ac == 2)
	{
		ft_atoi(av[1]);
		if (!(*av[1] >= 48 && *av[1] <= 57))
			ft_error();
	}
	else if (ac > 2)
	{
		ft_digit(ac, av);
		check_duplicat(av);
		init(&lst1);
		init(&lst2);
		i = ac - 1;
		while (i > 0)
		{
			push(&lst1, ft_atoi(av[i]), "n");
			i--;
		}
		is_sorted(&lst1);
		sort(&lst1, &lst2, ac);
	}
}

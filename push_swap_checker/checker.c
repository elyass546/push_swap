/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <ie-laabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 16:26:11 by ie-laabb          #+#    #+#             */
/*   Updated: 2022/03/16 15:39:33 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

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

void	init(t_list **lst)
{
	*lst = NULL;
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

void	help(t_list **stack1, t_list **stack2)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
		check_sort(stack1, stack2, str);
		free(str);
		str = get_next_line(0);
	}
	if (!(*stack1))
		ft_putstr("KO\n");
	else if (is_sorted(stack1) == 1 || (*stack2))
		ft_putstr("KO\n");
	else
		ft_putstr("OK\n");
}

int	main(int ac, char **av)
{
	t_list	*stack1;
	t_list	*stack2;
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
		init(&stack1);
		init(&stack2);
		i = ac - 1;
		while (i > 0)
		{
			push(&stack1, ft_atoi(av[i]));
			i--;
		}
		help(&stack1, &stack2);
	}
}

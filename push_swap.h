/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <ie-laabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:40:06 by ie-laabb          #+#    #+#             */
/*   Updated: 2022/03/06 19:37:35 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int					content;
	struct s_list		*next;
}						t_list;

/**************************************************/

size_t	ft_strlen(char *str);

/**************************************************/

int		push(t_list	**lst, int data, char *str);
int		ft_lstsize(t_list *lst);
int		r_rotate(t_list **lst);
int		rotate(t_list **lst);
int		ft_atoi(char *str);
int		found_min(t_list **lst);

/**************************************************/

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_putstr(char *str);
void	sort3(t_list **lst);
void	sort4(t_list **stack1, t_list **stack2);
void	swap(t_list *lst1);

/**************************************************/

t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
t_list	*ft_pop(t_list **stack);

#endif
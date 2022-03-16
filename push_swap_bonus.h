/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <ie-laabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:40:06 by ie-laabb          #+#    #+#             */
/*   Updated: 2022/03/15 16:52:05 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int					content;
	struct s_list		*next;
}						t_list;

typedef struct s_data {
	char	c;
	char	*str;
	int		read_return;
	char	*temp;
}				t_data;

/**************************************************/

size_t	ft_strlen(char *str);

/**************************************************/

void	ft_lstadd_back(t_list **lst, t_list *node);
void	ft_putstr(char *str);
void	init(t_list **lst);
void	ft_error(void);

/**************************************************/

void	check_sort(t_list **stack1, t_list **stack2, char *str);
int		ft_strcmp(char *s01, char *s02);
int		push(t_list	**lst, int data);
int		is_sorted(t_list **stack);
int		ft_lstsize(t_list *lst);
int		r_rotate(t_list **lst);
int		rotate(t_list **lst);
int		ft_atoi(char *str);
int		ft_isdigit(char c);
int		swap(t_list *lst1);

/**************************************************/

char	*get_next_line(int fd);

/**************************************************/

t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
t_list	*ft_pop(t_list **stack);

#endif
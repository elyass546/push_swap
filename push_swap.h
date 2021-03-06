/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <ie-laabb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:40:06 by ie-laabb          #+#    #+#             */
/*   Updated: 2022/03/13 16:58:37 by ie-laabb         ###   ########.fr       */
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

typedef struct s_data {
	char	c;
	char	*str;
	int		read_return;
	char	*temp;
}				t_data;

/**************************************************/

size_t	ft_strlen(char *str);

/**************************************************/

void	complex_sort(t_list **stack1, t_list **stack2, int size, int chunk);
void	sort_100(t_list **stack1, t_list **stack2);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	qwerty(t_list **stack1, t_list **stack2);
void	sort4(t_list **stack1, t_list **stack2);
void	sorts(t_list **stack1, t_list **stack2);
void	is_sorted(t_list **stack);
void	b_sort(t_list **stack);
void	ft_putstr(char *str);
void	sort3(t_list **lst);
void	swap(t_list *lst1);
void	init(t_list **lst);
void	ft_error(void);

/**************************************************/

int		push(t_list	**lst, int data, char *str);
int		r_rotate(t_list **lst, char *str);
int		rotate(t_list **lst, char *str);
int		found_min(t_list **lst);
int		ft_lstsize(t_list *lst);
int		find_max(t_list **lst);
int		ft_atoi(char *str);
int		ft_isdigit(char c);

/**************************************************/

char	*get_next_line(int fd);

/**************************************************/

t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
t_list	*ft_pop(t_list **stack);

#endif
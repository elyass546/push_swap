NAME = push_swap

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

FILES = ./libft_functions/ft_atoi.c ./libft_functions/ft_lstadd_back.c\
		./libft_functions/push.c ./libft_functions/ft_lstnew.c\
		./libft_functions/ft_strlen.c ./libft_functions/ft_lstlast.c\
		./libft_functions/swap.c\
		push_swap.c


all : $(NAME)

$(NAME) : $(FILES)
	$(CC) $(CFLAGS) $(FILES) -o $(NAME)

clean :
	$(RM) $(NAME)

fclean : clean

re : fclean all
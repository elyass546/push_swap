NAME = push_swap

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

FILES = ./utils/ft_atoi.c ./utils/ft_lstadd_back.c\
		./utils/push.c ./utils/ft_lstnew.c\
		./utils/ft_strlen.c ./utils/ft_lstlast.c\
		./utils/swap.c ./utils/rotate.c\
		./utils/reverse_rotate.c\
		push_swap.c


all : $(NAME)

$(NAME) : $(FILES)
	$(CC) $(CFLAGS) $(FILES) -o $(NAME)

clean :
	$(RM) $(NAME)

fclean : clean

re : fclean all
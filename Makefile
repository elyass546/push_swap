NAME = push_swap

NAME_B = checker

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

FILES = ./utils/b_sort.c ./utils/ft_atoi.c ./utils/ft_lst.c\
		./utils/ft_strlen.c ./utils/push.c ./utils/sorts.c\
		./utils/push_swap_utils.c ./utils/find.c ./utils/log_500.c\
		push_swap.c

FILES_BONUS = ./push_swap_checker/checker.c ./push_swap_checker/get_next_line.c\
			./push_swap_checker/ft_lst.c ./push_swap_checker/ft_strcmp.c\
			./push_swap_checker/push.c ./push_swap_checker/push_swap_utils.c \
			./push_swap_checker/test.c ./utils/ft_atoi.c ./push_swap_checker/ft_strlen.c \

all : $(NAME)

$(NAME) : $(FILES)
	$(CC) $(CFLAGS) $(FILES) -o $(NAME)

bonus : $(NAME_B)

$(NAME_B) : $(FILES_BONUS)
	$(CC) $(CFLAGS) $(FILES_BONUS) -o $(NAME_B)

clean :
	$(RM) $(NAME)

fclean : clean
	$(RM) $(NAME_B)

re : fclean all
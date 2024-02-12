CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC = ft_ascendant.c \
      ft_find_cheapest.c \
      ft_sort_3.c \
      ft_find_min.c \
      ft_sort_end.c \
      ft_push_swap.c \
      ft_groups.c \
      ft_index.c \
      ft_lstprint.c \
      ft_instructions.c \
      ft_score.c \
      ft_target.c \
      main.c

B_SRC = ft_get_next_line.c \
        get_next_line_utils.c \
        main_bonus.c \
        ft_checker.c

COMMON_SRC = ft_atol.c \
             ft_count.c \
             ft_check_args.c \
             ft_lst_sort.c \
             ft_error.c \
             ft_lstaddfront.c \
             ft_lstaddback.c \
             ft_push.c \
             ft_freesplit.c \
             ft_lstclear.c \
             ft_split.c \
             ft_lst_new.c \
             ft_rotate.c \
             ft_swap.c \
             ft_substr.c \
             ft_same_half.c \
             ft_strlen.c \
             ft_optimize.c \


OBJ = $(SRC:.c=.o)
B_OBJ = $(B_SRC:.c=.o)
COMMON_OBJ = $(COMMON_SRC:.c=.o)

HEADER_F = push_swap.h

NAME = push_swap
B_NAME = checker

all: $(NAME)

bonus: $(B_NAME)

$(NAME): $(OBJ) $(COMMON_OBJ)
	$(CC) $(CFLAGS) -c $(SRC)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(COMMON_OBJ)

$(B_NAME): $(B_OBJ) $(COMMON_OBJ)
	$(CC) $(CFLAGS) -c $(B_SRC)
	$(CC) $(CFLAGS) -o $(B_NAME) $(B_OBJ) $(COMMON_OBJ)

clean:
	rm -f $(OBJ) $(COMMON_OBJ) $(B_OBJ)

fclean: clean
	rm -f $(NAME) $(B_NAME)

re: fclean all bonus

.PHONY: all bonus clean fclean re

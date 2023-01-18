
NAME = push_swap
NAME_B = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRC = push_swap.c ft_split.c ft_substr.c ft_strlen.c check_validiter.c ft_strdup.c ft_atoi.c main.c ft_strspn.c\
ft_isdigit.c ft_itoa.c check_dup.c strcmp.c check_overflow.c ft_atoill.c fillstack.c ft_putnbr.c rules3.c\
 check_sort.c sorting_algo.c rules.c ft_strjoin.c ft_memcpy.c smallnum.c arrysorted.c back_to_stackA.c rules2.c sorting_algomore.c\

SRC_B = get_next_line_utils_bonus.c get_next_line_bonus.c checker_bonus.c push_swap_bonus.c ft_split_bonus.c ft_substr_bonus.c ft_strlen_bonus.c check_validiter_bonus.c ft_strdup_bonus.c ft_atoi_bonus.c\
ft_isdigit_bonus.c ft_itoa_bonus.c check_dup_bonus.c strcmp_bonus.c check_overflow_bonus.c ft_atoill_bonus.c fillstack_bonus.c ft_strspn_bonus.c rules3.c\
 check_sort_bonus.c rules_bonus.c ft_strjoin_bonus.c ft_memcpy_bonus.c smallnum_bonus.c arrysorted_bonus.c back_to_stackA_bonus.c rules2_bonus.c \

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

bonus: $(SRC_B)
	$(CC) $(CFLAGS) $(SRC_B) -o $(NAME_B)

clean:
	$(RM) $(NAME) $(NAME_B)

fclean: clean

re: fclean all

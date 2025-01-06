NAME	= push_swap
NAME_BONUS = checker

CC	= cc
CFLAGS	= -g -Wall -Wextra -Werror
RM	= rm -rf

PUSH_SWAP_DIR	= ./srcs/
PUSH_SWAP_SRCS	= main.c push_instruct.c swap_instruct.c rotate_instruct.c rev_rotate_instruct.c ft_index_stack.c ft_utils.c ft_error.c ft_sort500.c ft_sort100.c ft_free.c ft_simple_sort.c init.c
PUSH_SWAP	= $(addprefix $(PUSH_SWAP_DIR), $(PUSH_SWAP_SRCS))
PUSH_SWAP_OBJS	= $(PUSH_SWAP:.c=.o)

GNL_DIR	= ./get_next_line/
GNL_SRCS	= get_next_line.c get_next_line_utils.c
GNL	= $(addprefix $(GNL_DIR), $(GNL_SRCS))
GNL_OBJS	= $(GNL:.c=.o)

LIBFT_DIR	= ./libft/
LIBFT		= $(addprefix $(LIBFT_DIR), libft.a)

BONUS_DIR	= ./srcs/
BONUS_SRCS	= checker.c push_instruct.c swap_instruct.c rotate_instruct.c rev_rotate_instruct.c ft_index_stack.c ft_utils.c ft_error.c ft_sort500.c ft_sort100.c ft_free.c ft_simple_sort.c init.c
CHECKER		= $(addprefix $(BONUS_DIR), $(BONUS_SRCS))
BONUS_OBJS	= $(CHECKER:.c=.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(LIBFT) $(GNL_OBJS) $(PUSH_SWAP_OBJS)
	@$(CC) $(CFLAGS) $(PUSH_SWAP_OBJS) $(LIBFT) $(GNL_OBJS) -o $(NAME)
	
bonus: $(BONUS_OBJS) $(GNL_OBJS) $(LIBFT)
	@$(CC) $(CFLAGS) $(BONUS_OBJS) $(LIBFT) $(GNL_OBJS) -o $(NAME_BONUS)

libft:
	@$(MAKE) -C ./libft

clean_libft:
	@$(MAKE) -C ./libft fclean

re_libft:
	@$(MAKE) -C ./libft re
        
clean:
	@rm -rf $(NAME) $(NAME_BONUS) $(PUSH_SWAP_OBJS) $(GNL_OBJS) $(BONUS_OBJS)

fclean: clean clean_libft
	@rm -rf $(NAME)

re:	fclean re_libft all bonus

.PHONY:	all clean fclean re

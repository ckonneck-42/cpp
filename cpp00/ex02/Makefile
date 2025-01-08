NAME = bank
CC = g++
CFLAGS = -Wall -Wextra -Werror -I -std=c++98
# LIBFT_DIR = ./libft
# LIBS = -L$(LIBFT_DIR) -lft
# Source files for minishell
SRCS = Account.cpp tests.cpp
OBJS = $(SRCS:.cpp=.o)
# 'all' target
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	
# Pattern rule for object files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# 'clean' rule
clean:
	rm -f $(OBJS)

# 'fclean' rule
fclean: clean
	rm -f $(NAME)

# 're' rule
re: fclean all

# valgrind rule
valgrind: $(NAME)
		valgrind --leak-check=full --track-origins=yes ./$(NAME) $(ARGS)
		
# extra options: --verbose --show-leak-kinds=all --log-file=valgrind-out.txt
#norminette rule
norminette: $(PHILO_SRSC)
		norminette $(PHILO_SRSC)

# Declare phony targets
.PHONY: all libft clean fclean re
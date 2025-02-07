NAME = animal
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp animal.cpp cat.cpp dog.cpp WrongAnimal.cpp WrongCat.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

# valgrind rule
valgrind: $(NAME)
		valgrind --leak-check=full --track-origins=yes ./$(NAME) $(ARGS)
		
# extra options: --verbose --show-leak-kinds=all --log-file=valgrind-out.txt
#norminette rule
#norminette: $(SRSC)
#		norminette $(SRSC)

# Declare phony targets
.PHONY: all libft clean fclean re
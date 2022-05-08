CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = brained

SRCS = Brain.cpp AAnimal.cpp Dog.cpp Cat.cpp main.cpp

HEADS = Brain.hpp AAnimal.hpp Dog.hpp Cat.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADS) Makefile
	$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

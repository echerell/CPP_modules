CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = battle

SRCS = Weapon.cpp HumanA.cpp HumanB.cpp main.cpp

HEADS = Weapon.hpp HumanA.hpp HumanB.hpp

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

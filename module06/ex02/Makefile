CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = polymorph

SRCS =  Base.cpp main.cpp

HEADS = A.hpp B.hpp C.hpp Base.hpp

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

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = megaphone

all: $(NAME)

$(NAME): megaphone.o
	$(CC) megaphone.o -o $(NAME)

megaphone.o: megaphone.cpp Makefile
	$(CC) $(CFLAGS) -c megaphone.cpp -o megaphone.o

clean:
	rm -rf megaphone.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

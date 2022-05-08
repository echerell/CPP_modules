CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = concrete

SRCS = PresidentialPardonForm.cpp RobotomyRequestForm.cpp \
		ShrubberyCreationForm.cpp AForm.cpp Bureaucrat.cpp main.cpp

HEADS = PresidentialPardonForm.hpp RobotomyRequestForm.hpp \
		ShrubberyCreationForm.hpp AForm.hpp Bureaucrat.hpp

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

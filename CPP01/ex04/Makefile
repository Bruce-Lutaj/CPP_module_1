NAME = replace

CC = c++
HEADERS = replace.hpp
FLAGS = -Wall -Wextra -Werror -I$(HEADERS) -std=c++98 -g

RM = rm -f

SRC = main.cpp \
	  replace.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean: 
	$(RM) $(NAME)

re: fclean all
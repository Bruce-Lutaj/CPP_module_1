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

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all
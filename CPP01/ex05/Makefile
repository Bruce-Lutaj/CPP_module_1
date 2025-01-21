NAME = Harl

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g

RM = rm -f

SRC = main.cpp \
	  replace.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean: 
	$(RM) $(NAME)

re: fclean all
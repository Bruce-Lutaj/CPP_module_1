NAME = exec

CC = c++
HEADERS = Zombie.hpp
FLAGS = -Wall -Wextra -Werror -g -I$(HEADERS) -std=c++98

RM = rm -f

SRC = 	main.cpp \
		Zombie.cpp
		
		
all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean: 
	$(RM) $(NAME)

re: fclean all
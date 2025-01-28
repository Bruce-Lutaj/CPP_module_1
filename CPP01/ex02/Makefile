NAME = Exe

CC = c++
FLAGS = -Wall -Wextra -Werror -g -std=c++98

RM = rm -f

SRC = 	main.cpp
		
		
all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all
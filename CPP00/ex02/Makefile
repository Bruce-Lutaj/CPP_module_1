NAME = account

CC = c++
HEADERS = Account.hpp
FLAGS = -Wall -Wextra -Werror -g -I$(HEADERS) -std=c++98

RM = rm -f

SRC = 	tests.cpp \
		Account.cpp
		
		
all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean: 
	$(RM) $(NAME)

re: fclean all
NAME = Exe

CC = c++
HEADERS = Fixed.hpp
FLAGS = -Wall -Wextra -Werror -g -I$(HEADERS) -std=c++98

RM = rm -f

SRC = 	main.cpp \
		Fixed.cpp	
		
all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all
NAME = Exe

CC = c++
HEADERS = headers 
FLAGS = -Wall -Wextra -Werror -Wshadow -g -I$(HEADERS) -std=c++98

RM = rm -f

SRC = 	main.cpp \
		ClapTrap.cpp \
		FragTrap.cpp \
		ScavTrap.cpp \
		DiamondTrap.cpp
		
all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all
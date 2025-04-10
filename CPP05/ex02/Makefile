NAME = Exe

CC = c++
HEADERS = headers
FLAGS = -Wall -Wextra -Werror -g -I$(HEADERS) -std=c++98

RM = rm -f

SRC = 	main.cpp      	      \
		AForm.cpp	    	   \
		Bureaucrat.cpp 		    \
		RobotomyRequestForm.cpp  \
		ShrubberyCreationForm.cpp \
		PresidentialPardonForm.cpp \
		
all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all
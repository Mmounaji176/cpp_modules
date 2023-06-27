NAME=ex03

CPP=c++

CPPFLAGS= -Wall -Wextra -Werror -std=c++98

SRC= main Bureaucrat AForm PresidentialPardonForm RobotomyRequestForm ShrubberyCreationForm Intern\

OBJ=$(SRC:=.o)

%.o:%.cpp
	$(CPP) $(CPPFLAGS) -c $<

$(NAME): $(OBJ) 
	$(CPP) $(CPPFLAGS)  $(OBJ) -o $(NAME) 

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean:clean
	$(RM) $(NAME)

re: fclean all

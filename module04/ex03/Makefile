NAME=  ex03
RM= rm -rf
CPP = c++
CPPFLAGS =  -std=c++98 -Wall -Wextra -Werror

SRC= main AMateria Cure Ice  Character MateriaSource \

OBJ= $(SRC:=.o)

all: $(NAME)

%.o:%.cpp
	$(CC) $(CFLAGS) -c $<

$(NAME): $(OBJ)
	$(CC) $(CFLAGS)  $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
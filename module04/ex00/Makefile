NAME=  ex00
RM= rm -rf
CC = c++
CFLAGS =  -std=c++98 -fsanitize=address -g3

SRC= main Animal Dog Cat WrongCat WrongAnimal\

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
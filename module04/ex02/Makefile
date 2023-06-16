NAME=  ex02
RM= rm -rf
CC = c++
CFLAGS =  -std=c++98 -Wall -Wextra -Werror
SRC= main Animal Dog Cat WrongCat WrongAnimal Brain\

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
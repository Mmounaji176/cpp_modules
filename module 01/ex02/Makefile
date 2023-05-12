NAME= HI_THIS_IS_BRAIN
RM= rm -rf
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC= main\

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
NAME= PhoneBook
RM= rm -rf
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC= Contact PhoneBook\
	 
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
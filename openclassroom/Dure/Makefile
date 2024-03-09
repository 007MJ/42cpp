NAME	= Dure
RM		= rm -fr
CCPP	= g++
CFLAG	= -Wall -Werror -Wextra -std=c++98

SRC = main.cpp Dure.cpp

OBJ = ${SRC:.c=.o}

all : $(NAME)

$(NAME) : ${OBJ}
	$(CCPP) $(OBJ) $(CFLAG) -o $@

%.o : %.c
	$(CCPP) $(CFLAG) -o $@ -c $^

clean :
	$(RM) $(OBJ)

fclean :
	$(RM) $(NAME)

re : fclean all
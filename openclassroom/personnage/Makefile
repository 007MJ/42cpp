NAME    =     perso
RM      =     rm -f
CCPP 	=     g++
CFLAG   =     -Wall -Werror -Wextra -std=c++98
SRC     =     main.cpp Personnage.class.cpp Arme.class.cpp

OBJ     =     $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CCPP) $(OBJ) $(CFLAG) -o $@

%.o : %.c
	$(CCPP) $(CFLAG) -o $@ -c $^

clean :
	$(RM) $(OBJ) 

fclean : clean
	$(RM) $(NAME)

re : fclean all

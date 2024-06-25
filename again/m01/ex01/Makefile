NAME    =     Zombie
RM      =     rm -f
CCPP	=     c++
CFLAG   =     -Wall -Werror -Wextra -std=c++98
SRC     =     main.cpp Zombie.cpp zombieHorde.cpp

OBJ     =     $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CCPP) $(OBJ) $(CFLAG) -o $@

%.o : %.cpp
	$(CCPP) $(CFLAG) -o $@ -c $^

clean :
	$(RM) $(OBJ) $(OBJSB)

fclean : clean
	$(RM) $(NAME)

re : fclean all
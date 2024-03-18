NAME    =     zombie
RM      =     rm -f
CCPP	=     c++
CFLAG   =     -Wall -Werror -Wextra -g -std=c++98 
#-fsanitize=address
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

# valgrind --leak-check=yes --leak-check=full --show-leak-kinds=all 
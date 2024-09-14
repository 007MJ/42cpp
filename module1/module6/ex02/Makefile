NAME    =     base
RM      =     rm -f
CCPP	=     c++
CFLAG   =     -Wall -Werror -Wextra -std=c++98
SRC     =     main.cpp 

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

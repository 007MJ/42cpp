NAME    =    form
RM      =     rm -f
CCPP  	=  		g++
CFLAG   =     -Wall -Werror -Wextra -std=c++98
SRC     =     main.cpp Bureaucrat.cpp Form.cpp 

OBJ     =     $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
%.o : %.cpp
	$(CCPP) $(OBJ) $(CFLAG) -o $@

%.o : %.cpp
	$(CCPP) $(CFLAG) -o $@ -c $^

clean :
	$(RM) $(OBJ) $(OBJSB)

fclean : clean
	$(RM) $(NAME)

re : fclean all

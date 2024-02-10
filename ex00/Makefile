NAME    =     megaphoe
RM      =     rm -f
CCPP  =     g++
CFLAG   =     -Wall -Werror -Wextra -std=c++98
SRC     =     megaphone.cpp

OBJ     =     $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CCPP) $(OBJ) $(CFLAG) -o $@

%.o : %.c
	$(CCPP) $(CFLAG) -o $@ -c $^

clean :
	$(RM) $(OBJ) $(OBJSB)

fclean : clean
	$(RM) $(NAME)

re : fclean all

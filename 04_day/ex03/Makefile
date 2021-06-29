SRCS			= AMateria.cpp Cure.cpp MateriaSource.cpp Character.cpp  Ice.cpp   main.cpp

OBJS			= $(SRCS:.cpp=.o)

COMP			= clang++

RM 				= rm -f

FLAGS 			= -Wall -Wextra -Werror

NAME			= fantasy

all:			$(NAME)

$(NAME):		$(OBJS)
				$(COMP) $(FLAGS) -o $(NAME) $(OBJS)
clean:
				$(RM) $(OBJS)
fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re



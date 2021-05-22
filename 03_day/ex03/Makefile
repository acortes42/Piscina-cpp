SRCS			= FragTrap.cpp main.cpp ScavTrap.cpp ClapTrap.cpp NinjaTrap.cpp
OBJS			= $(SRCS:.cpp=.o)

COMP			= clang++

RM 				= rm -f

FLAGS 			= -Wall -Wextra -Werror -fsanitize=address  -I.

NAME			= ninjatrap

all:			$(NAME)

$(NAME):		$(OBJS)
				$(COMP) $(FLAGS) -o $(NAME) $(OBJS)
clean:
				$(RM) $(OBJS)
fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re

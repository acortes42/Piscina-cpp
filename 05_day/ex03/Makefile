SRCS			= Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp main.cpp \
				 	PresidentialPardonForm.cpp Intern.cpp

OBJS			= $(SRCS:.cpp=.o)

COMP			= clang++

RM 				= rm -f

FLAGS 			= -Wall -Wextra -Werror

NAME			= Bureaucrat

all:			$(NAME)

$(NAME):		$(OBJS)
				$(COMP) $(FLAGS) -o $(NAME) $(OBJS)
clean:
				$(RM) $(OBJS)
				$(RM) *.txt
fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re

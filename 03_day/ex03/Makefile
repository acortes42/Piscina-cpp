OBJS = FragTrap.cpp main.cpp ScavTrap.cpp ClapTrap.cpp NinjaTrap.cpp
CFLAGS = -Wall -Wextra -Werror

all: ${OBJS}
	@clang++ ${OBJS} ${CFLAGS} -o clap.out
clean:
	@rm -f  *.out
fclean: clean
	@rm -f *.out

re: fclear all

PHONY: all clean fclean re

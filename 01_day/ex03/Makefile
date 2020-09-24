OBJS = Zombie.cpp main.cpp ZombieHorde.cpp
CFLAGS = -Wall -Wextra -Werror

all: ${OBJS}
	@clang++ ${OBJS} ${CFLAGS} -o zombi.out
clean:
	@rm -f  *.out
fclean: clean
	@rm -f *.out

re: fclear all

PHONY: all clean fclean re


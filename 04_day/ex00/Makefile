OBJS = main.cpp Peon.cpp Sorcerer.cpp Victim.cpp
CFLAGS = -Wall -Wextra -Werror

all: ${OBJS}
	@clang++ ${OBJS} ${CFLAGS} -o Sorcerer.out
clean:
	@rm -f  *.out
fclean: clean
	@rm -f *.out

re: fclear all

PHONY: all clean fclean re

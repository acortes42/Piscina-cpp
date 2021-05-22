OBJS = AssaultTerminator.cpp main.cpp Squad.cpp  TacticalMarine.cpp

CFLAGS = -Wall -Wextra -Werror

all: ${OBJS}
	@clang++ ${OBJS} ${CFLAGS} -o hammer.out
clean:
	@rm -f  *.out
fclean: clean
	@rm -f *.out

re: fclear all

PHONY: all clean fclean re

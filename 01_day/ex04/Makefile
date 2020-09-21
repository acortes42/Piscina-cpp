OBJS = ex04.cpp
CFLAGS = -Wall -Wextra -Werror
COMP = ${OBJS: .c =.o}

#@clang++ -c ${CFLAGS} ${OBJS}

all: ${OBJS}
	@clang++ ${OBJS} ${CFLAGS}
clean:
	@rm -f  *.o
fclean: clean
	@rm -f *.o
	@rm -f *.out
	@rm -f pony.out

re: fclear all

PHONY: all clean fclean re

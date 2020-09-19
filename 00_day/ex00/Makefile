OBJS = megaphone.cpp
CFLAGS = -Wall -Wextra -Werror
COMP = ${OBJS: .c =.o}

#@clang++ -c ${CFLAGS} ${OBJS}

all: ${OBJS}
	@clang++ ${OBJS} -o megaphone
clean:
	@rm -f  *.o
fclean: clean
	@rm -f *.o
	@rm -f *.out
	@rm -f megaphone

re: fclear all

PHONY: all clean fclean re


OBJS = ex04.cpp
CFLAGS = -Wall -Wextra -Werror

all: ${OBJS}
	@clang++ ${OBJS} ${CFLAGS}
clean:
	@rm -f  *.out
fclean: clean
	@rm -f *.out

re: fclear all

PHONY: all clean fclean re

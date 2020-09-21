OBJS = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
CFLAGS = -Wall -Wextra -Werror
COMP = ${OBJS: .c =.o}

#@clang++ -c ${CFLAGS} ${OBJS}

all: ${OBJS}
	@clang++ ${OBJS} ${CFLAGS} -o War.out
clean:
	@rm -f  *.o
fclean: clean
	@rm -f *.o
	@rm -f *.out
	@rm -f pony.out

re: fclear all

PHONY: all clean fclean re

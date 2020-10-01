OBJS = AMateria.cpp Cure.cpp MateriaSource.cpp Character.cpp  Ice.cpp   main.cpp

CFLAGS = -Wall -Wextra -Werror

all: ${OBJS}
	@clang++ ${OBJS} ${CFLAGS} -o magic.out
clean:
	@rm -f  *.out
fclean: clean
	@rm -f *.out

re: fclear all

PHONY: all clean fclean re

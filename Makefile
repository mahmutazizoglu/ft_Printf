NAME = libftprintf.a

SOURCES = ft_printf.c ft_typecheck.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putptr.c ft_putuns.c ft_putx.c 

OBJECTS = ${SOURCES:.c=.o}

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

all: ${NAME}

${NAME}: ${OBJECTS}
	ar rcs ${NAME} ${OBJECTS}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJECTS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
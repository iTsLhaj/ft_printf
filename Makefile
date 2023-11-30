CC		= 	cc
CFLAGS	= 	-Wall -Wextra -Werror -c
NAME	= 	libftprintf.a
FILES	=	src/ft_putchr	\
			src/ft_puthex	\
			src/ft_putmem	\
			src/ft_putnbr	\
			src/ft_putstr	\
			src/ft_putunb	\
			libftprintf
SRCS	=	$(addsuffix .c,$(FILES))
OBJS	=	$(SRCS:.c=.o)
AR		=	ar -rc

all: $(NAME)

$(NAME): $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@
	$(AR) $(NAME) $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

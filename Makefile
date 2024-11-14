NAME = libftprintf.a

SRC = ft_printf.c ft_aux.c ft_controls.c
OBJ = $(SRC:.c=.o)
INCLUDE = ft_printf.h

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs

$(NAME): $(OBJ) $(INCLUDE)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

all: $(NAME)

re:	fclean all

.PHONY: clean fclean all re

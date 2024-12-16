CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = 

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

INCLUDES = libft.h

all: $(NAME)

$(NAME): $(OBJS)

%.o: %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@
	ar r $(NAME) $@

clean:
	rm -f $(OBJS) $(BOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

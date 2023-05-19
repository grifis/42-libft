NAME = libft.a
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_memset.c ft_strlen.c ft_isprint.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c ft_strlcpy.c
OBJS = $(SRCS:%.c=%.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(TARGET)

re: fclean all

.PHONY: all clean fclean re

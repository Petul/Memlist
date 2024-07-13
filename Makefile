NAME := libmemlist.a
CC := gcc
CFLAGS := -Wall -Wextra -Werror
CFILES := memlist_add.c \
	memlist.c \
	release.c \
	reserve.c \
	list/ft_lstadd_back.c \
	list/ft_lstadd_front.c \
	list/ft_lstclear.c \
	list/ft_lstdelone.c \
	list/ft_lstiter.c \
	list/ft_lstlast.c \
	list/ft_lstmap.c \
	list/ft_lstnew.c \
	list/ft_lstsize.c

OBJECTS := $(CFILES:.c=.o)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $?

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(OBJECTS)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all

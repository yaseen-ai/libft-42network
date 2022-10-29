SRC = ft_atoi.c ft_itoa.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_isspace.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_split.c ft_memset.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_strmapi.c
BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
OBJ = $(SRC:.c=.o)
OBJBONUS = $(BONUS:.c=.o)
HEADER = libft.h
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}:${OBJ}
	@ar rc $@ $^

bonus:${OBJBONUS}
	@ar rc ${NAME} $^

%.o : %.c ${HEADER}
	${CC} ${CFLAGS} -c $< 

clean:
	@rm -f ${OBJ} ${OBJBONUS}

fclean: clean
	@rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re bonus
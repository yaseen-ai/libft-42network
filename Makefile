SRC = ft_split.c ft_strlen.c ft_strtrim.c ft_substr.c
OBJ = ft_split.o ft_strlen.o ft_strtrim.o ft_substr.o
NAME = test
all: $(NAME)

test: $(OBJ)
	cc -Wall -Werror -Wextra -g $(OBJ) -o $(NAME)

%.o: %.c
	cc -Wall -Werror -Wextra -g -c $< -o $@
NAME = Ianimal
CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): main.cpp Dog.cpp Cat.cpp AAnimal.cpp Brain.cpp
	@$(CC) $(FLAGS) main.cpp Dog.cpp Cat.cpp AAnimal.cpp Brain.cpp -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean: clean

re: fclean all

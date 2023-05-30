NAME = Igui
CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): main.cpp MateriaSource.cpp Ice.cpp Cure.cpp Character.cpp AMateria.cpp
	@$(CC) $(FLAGS) main.cpp MateriaSource.cpp Ice.cpp Cure.cpp Character.cpp AMateria.cpp -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean: clean

re: fclean all

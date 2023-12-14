NAME = Materia

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

HDR = AMateria.hpp ICharacter.hpp MateriaSource.hpp

SRCS = main.cpp AMateria.cpp ICharacter.cpp MateriaSource.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) $(HDR)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
NAME = Bureaucrat

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

HDR = Bureaucrat.hpp

SRC = Bureaucrat.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all	
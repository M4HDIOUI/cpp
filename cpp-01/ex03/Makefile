NAME = main

CC = c++

FLAGS = -Wall -Wextra -Werror

HDRS = HumanB.hpp HumanA.hpp Weapon.hpp

SRCS = main.cpp HumanB.cpp HumanA.cpp Weapon.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp $(HDRS)
	$(CC) $(FLAGS) -c $< -o $@

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
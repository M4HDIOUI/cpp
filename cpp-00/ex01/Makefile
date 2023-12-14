NAME = PhoneBook

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

HDRS = PhoneBook.hpp Contact.hpp

SRCS = main.cpp PhoneBook.cpp contact.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HDRS)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all


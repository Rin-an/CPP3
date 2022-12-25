NAME = diamondtrap
HEADERS = $(wildcard *.hpp)
SRCS = $(wildcard *.cpp)
OBJS := $(SRCS:.cpp=.o)

RM = rm -rf
CC = c++ -Wall -Werror -Wextra -Wshadow -Wno-shadow -std=c++98

$(NAME) : $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o : %.cpp $(HEADERS)
	$(CC) -c $< -o $@

all : $(NAME)

clean :
	$(RM) $(OBJS)
fclean : clean
	$(RM) $(NAME)

re : fclean all
.PHONY: all clean fclean re

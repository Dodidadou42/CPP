NAME		= Poly
	
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

SRCS		= main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

.cpp.o:
		${CC} ${FLAGS} -c $< -o $@

OBJS		= ${SRCS:.cpp=.o}

$(NAME): $(OBJS)
	$(CC) ${FLAGS} -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
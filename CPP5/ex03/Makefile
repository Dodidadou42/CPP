NAME		= Bureaucrat
	
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98 -I.
RM			= rm -rf

SRCS		= main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

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
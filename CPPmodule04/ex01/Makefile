NAME	= a.out
CC		= clang++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC		= 	main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

HDR		=	Animal.hpp Dog.hpp Cat.hpp Brain.hpp

OBJ		= 	$(SRC:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -o $@

$(OBJ):		$(HDR)

%.o :		%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
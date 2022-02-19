NAME	= brainz
CC		= clang++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC		= 	main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

HDR		=	Zombie.hpp

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

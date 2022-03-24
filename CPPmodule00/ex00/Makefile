NAME	= megaphone
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC		= megaphone.cpp
OBJ		= megaphone.o

all:	$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -o $@

$(OBJ):		$(SRC)
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re


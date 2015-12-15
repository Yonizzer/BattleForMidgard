##
## Makefile for Makefile in /home/yoann/projet/battle_for_midgard/poli_y/lib_src
## 
## Made by POLI Yoann
## Login   <poli_y@etna-alternance.net>
## 
## Started on  Mon Dec 14 20:51:43 2015 POLI Yoann
## Last update Tue Dec 15 10:09:02 2015 POLI Yoann
##

CC =		gcc
NAME =		sta
NAME_GDB =	sta_debug
SRC =		main.c \
		parse_arg.c \
		help.c

OBJ =		$(SRC:%.c=%.o)
RM = 		rm -rf

MAKE_LIB =	make -C lib_src/
LDFLAGS =	"lib_src/libmy.a"
CFLAGS =	-W -Werror -Wall -L.
CFLAGS2 =	-ggdb -W -Werror -Wextra -Wall -L.

$(NAME):	$(OBJ)
		$(MAKE_LIB)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LDFLAGS)
		$(RM) $(OBJ)

$(NAME_GDB):	$(OBJ)
		$(MAKE_LIB)
		$(CC) $(CFLAGS2) $(OBJ) -o $(NAME_GDB) $(LDFLAGS)
		$(RM) $(OBJ)	

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all

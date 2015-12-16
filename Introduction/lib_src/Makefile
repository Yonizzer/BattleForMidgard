##
## Makefile for Makefile in /home/yoann/projet/battle_for_midgard/poli_y/lib_src
## 
## Made by POLI Yoann
## Login   <poli_y@etna-alternance.net>
## 
## Started on  Mon Dec 14 20:51:43 2015 POLI Yoann
## Last update Wed Dec 16 11:42:36 2015 POLI Yoann
##

CC =		gcc
NAME_LIB =	libmy.a
SRC =		my_putchar.c \
		my_isneg.c \
		my_put_nbr.c \
		my_swap.c \
		my_putstr.c \
		my_strlen.c \
		my_getnbr.c \
		my_strcpy.c \
		my_strncpy.c \
		my_strcmp.c \
		my_strncmp.c \
		my_strcat.c \
		my_strncat.c \
		my_strstr.c \
		my_strdup.c

OBJ =		$(SRC:%.c=%.o)
RM = 		rm -rf

$(NAME_LIB):	$(OBJ)
		ar rc $(NAME_LIB) $(OBJ)
		$(RM) $(OBJ)

all:	$(NAME_LIB)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME_LIB)

re:	fclean all

##
## Makefile for Makefile in /home/felten_n/rendu/Programme_sys_UNIX/PSU_2015_tetris
## 
## Made by nicolas felten
## Login   <felten_n@epitech.net>
## 
## Started on  Thu Mar 10 14:03:23 2016 nicolas felten
## Last update Tue Mar 22 16:43:35 2016 
##

SRC		=	tetris.c \
			my_show_wordtab.c \
			my_strdup.c \
			tab.c \
			my_str_to_wordtab.c \
			get_tetriminos.c \
			modif_tab.c \
			open_pieces.c \
			check_pieces.c \
			my_put_in_list.c \
			my_tab.c \
			my_getchar.c \
			display_map.c \
			action.c \
			deplacement.c \
			collision.c \
			mouse.c \
			game_over.c \
			color.c \
			color2.c \
			letter.c \
			letter2.c \
			letter_3d.c \
			letter2_3d.c \
			letter_game_over.c \
			letter_game_over2.c \
			letter_game_over_3d.c \
			letter_game_over2_3d.c

RM		= 	rm -f

NAME		= 	tetris

OBJ		= 	$(SRC:.c=.o)

CFLAGS		+=	-g3 -g

CC		=	gcc

all:			$(NAME)

$(NAME):		$(OBJ) $(OBJS)
			$(CC) -o $(NAME) $(OBJ) libmy.a -lncurses

clean:
			$(RM) $(OBJ)

fclean: 		clean
			$(RM) $(NAME)

re: 			fclean all

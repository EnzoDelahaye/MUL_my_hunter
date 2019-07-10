##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## 2018
##

SRC	=	lib/my/open_window.c 	\
		lib/my/main.c \
		lib/my/analyse_events.c \
		lib/my/disp_sprite.c \
		lib/my/disp_duck.c \
		lib/my/disp_mouse.c \
		lib/my/move_rect.c \
		lib/my/duck_anim.c \
		lib/my/descriptor.c \
		lib/my/my_putstr.c \
		lib/my/sound/hitsound.c \
		lib/my/sound/duckshooted.c \
		lib/my/sound/sound.c \

NAME	=	my_hunter

OBJ = $(SRC:.c=.o)

FLAGS = -lcsfml-graphics -lcsfml-audio -lcsfml-system -lcsfml-window

$(NAME): $(OBJ)
	gcc $(OBJ) $(FLAGS) -o $(NAME)

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(OBJ)

re:	fclean all

.PHONY: all clean fclean re

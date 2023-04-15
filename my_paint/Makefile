##
## EPITECH PROJECT, 2022
## makefile cat
## File description:
## Makefile
##

SRC		=	src/main.c \
			src/manage_sprite.c \
			src/my_strcmp.c \
			src/init_sprites.c \
			src/clic_button.c \
			src/file_setting.c \
			src/draw.c \
			src/edit_setting.c \
			src/pinceau.c \
			src/gomme.c \
			src/manage_buttons.c \
			src/init_text.c \
			src/my_int_to_str.c \
			src/manage_text.c \
			src/draw_all_sprites.c \
			src/get_color.c \
			src/file_open.c \
			src/gomme2.c \
			src/modify_button_state.c \
			src/help_setting.c \
			src/my_strlen.c

OBJ		=	$(SRC:.c=.o)

NAME 		= my_paint

CSFML =     -lcsfml-graphics -lcsfml-window -lcsfml-system -lm

all: $(OBJ)
				gcc $(OBJ) -o $(NAME) $(CSFML)

clean:
				rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re: fclean all

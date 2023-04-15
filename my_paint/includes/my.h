/*
** EPITECH PROJECT, 2023
** B-MUL-200-LIL-2-1-mypaint-remi.fernandez
** File description:
** TODO: add description
*/

#ifndef MY_H
    #define MY_H
    #define WINDOW paint->window
    #define RAC_SPRITE paint->racine_sprite
    #define RAC_BUTTON paint->racine_buttons
    #define RAC_TEXT paint->racine_text
    #define getbv get_button_value
    #define setbv set_button_value
    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <SFML/System.h>
    #include <SFML/Graphics/Rect.h>
    #include <SFML/System/Clock.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include "errno.h"
    #include "struct.h"
    #include "math.h"
    #include "stdlib.h"
    #include <string.h>
    #include <stdio.h>
    #include "unistd.h"
    #include <signal.h>
    #include <sys/types.h>
    #include <sys/wait.h>
    #include "errno.h"

sfRenderWindow *create_window(unsigned int width,unsigned int height,int bits);
int my_strcmp(char const *s1, char const *s2);
void initialise_sprite_list(PAINT_T *paint);
int create_sprite(PAINT_T *paint, char *name, char *path);
sfSprite *get_sprite(PAINT_T *paint, char *name);
int draw_sprite(PAINT_T *paint, char *name);
int init_sprites(PAINT_T *paint);
void open_file_bar(PAINT_T *paint);
void handle_clic(PAINT_T *paint, sfEvent *event);
void if_drawing(PAINT_T *paint, sfEvent *event, sfVertexArray *carrer);
void drawing_circle(PAINT_T *paint, sfEvent * event);
int is_mouse_on(PAINT_T *paint, char *name);
void modify_button_state(PAINT_T *paint);
void draw_all_sprites(PAINT_T *paint);
void file_setting(PAINT_T *paint, sfColor file_menu_color);
void open_edit_bar(PAINT_T *paint);
void edit_setting(PAINT_T *paint, sfColor file_menu_color);
void pinceau_setting(PAINT_T *paint, sfColor file_menu_color);
void select_pinceau(PAINT_T *paint);
void select_gomme(PAINT_T *paint);
void gomme_setting(PAINT_T *paint, sfColor file_menu_color);
void initialise_button_list(PAINT_T *paint);
void init_button(PAINT_T *paint);
int get_button_value(PAINT_T *paint, char *name);
int set_button_value(PAINT_T *paint, char *name, int value);
void initialise_text_list(PAINT_T *paint);
void create_text(PAINT_T *paint, char *name, char *text);
int draw_text(PAINT_T *paint, char *name);
sfText *get_text(PAINT_T *paint, char *name);
char * my_int_to_str(int nb);
int init_text(PAINT_T *paint);
void incr_thickness(PAINT_T *paint);
void draw_all_sprites(PAINT_T *paint);
void drawing_carrer(PAINT_T *paint, sfEvent * event, sfVertexArray *carrer);
void get_color(PAINT_T *paint);
void new_file(PAINT_T *paint);
void save_file(PAINT_T *paint);
void modify_button_state2(PAINT_T *paint);
void help_setting(PAINT_T *paint, sfColor file_menu_color);
void open_help_bar(PAINT_T *paint);
void draw_about_window(PAINT_T *paint);
int my_strlen(char const *str);
#endif

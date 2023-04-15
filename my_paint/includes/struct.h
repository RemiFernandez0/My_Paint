/*
** EPITECH PROJECT, 2023
** B-MUL-200-LIL-2-1-mypaint-remi.fernandez
** File description:
** TODO: add description
*/

#ifndef STRUCT_H
    #define STRUCT_H

typedef struct TEXT_STRUCT {
    sfText *text;
    char *name;
    struct TEXT_STRUCT *next;
} TEXT_T;

typedef struct SPRITE_STRUCT {
    sfSprite *sprite;
    char *name;
    struct SPRITE_STRUCT *next;
}SPRITE_T;

typedef struct BUTTONS_LIST {
    char *name;
    int value;
    struct BUTTONS_LIST *next;
}BUTTONLIST_T;

typedef struct PAINT_STRUCT {
    sfRenderWindow *window;
    sfEvent event;
    SPRITE_T *racine_sprite;
    BUTTONLIST_T *racine_buttons;
    sfVertexArray *lines;
    struct TEXT_STRUCT *racine_text;
    float thickness;
    sfColor color;

}PAINT_T;

#endif

/*
** EPITECH PROJECT, 2023
** B-MUL-200-LIL-2-1-mypaint-remi.fernandez
** File description:
** TODO: add description
*/
#include "../includes/my.h"

void initialise_sprite_list(PAINT_T *paint)
{
    RAC_SPRITE = malloc(sizeof(*RAC_SPRITE));
    RAC_SPRITE->sprite = NULL;
    RAC_SPRITE->name = NULL;
    RAC_SPRITE->next = RAC_SPRITE;
}

int create_sprite(PAINT_T *paint, char *name, char *path)
{
    SPRITE_T *new = malloc(sizeof(*new));
    sfTexture *texture;
    if (!(texture = sfTexture_createFromFile(path, NULL)))
        return 84;
    new->sprite = sfSprite_create();
    sfSprite_setTexture(new->sprite, texture, sfTrue);
    new->name = name;
    new->next = RAC_SPRITE->next;
    RAC_SPRITE->next = new;
    return 0;
}

int draw_sprite(PAINT_T *paint, char *name)
{
    SPRITE_T *list;
    for (list = RAC_SPRITE->next; list != RAC_SPRITE; list = list->next) {
        if (my_strcmp(list->name, name) == 0) {
            sfRenderWindow_drawSprite(WINDOW, list->sprite, NULL);
            return 0;
        }
    }
    return -1;
}

sfSprite *get_sprite(PAINT_T *paint, char *name)
{
    SPRITE_T *list;
    for (list = RAC_SPRITE->next; list != RAC_SPRITE; list = list->next) {
        if (my_strcmp(list->name, name) == 0) {
            return list->sprite;
        }
    }
    return NULL;
}

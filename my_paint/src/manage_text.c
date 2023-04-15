/*
** EPITECH PROJECT, 2023
** B-MUL-200-LIL-2-1-mypaint-remi.fernandez
** File description:
** TODO: add description
*/

#include "../includes/my.h"

void initialise_text_list(PAINT_T *paint)
{
    RAC_TEXT = malloc(sizeof(*RAC_TEXT));
    RAC_TEXT->text = sfText_create();
    RAC_TEXT->text = NULL;
    RAC_TEXT->name = NULL;
    RAC_TEXT->next = RAC_TEXT;
}

void create_text(PAINT_T *paint, char *name, char *text)
{
    TEXT_T *new = malloc(sizeof(*new));
    new->name = name;
    new->text = sfText_create();
    sfText_setString(new->text, text);
    new->next = RAC_TEXT->next;
    RAC_TEXT->next = new;
}

int draw_text(PAINT_T *paint, char *name)
{
    TEXT_T *list;
    for (list = RAC_TEXT->next; list != RAC_TEXT; list = list->next) {
        if (my_strcmp(list->name, name) == 0) {
            sfRenderWindow_drawText(WINDOW, list->text, NULL);
            return 0;
        }
    }
    return -1;
}

sfText *get_text(PAINT_T *paint, char *name)
{
    TEXT_T *list;
    for (list = RAC_TEXT->next; list != RAC_TEXT; list = list->next) {
        if (my_strcmp(list->name, name) == 0) {
            return list->text;
        }
    }
    return NULL;
}

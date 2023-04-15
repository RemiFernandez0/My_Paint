/*
** EPITECH PROJECT, 2023
** B-MUL-200-LIL-2-1-mypaint-remi.fernandez
** File description:
** TODO: add description
*/
#include "../includes/my.h"

void initialise_button_list(PAINT_T *paint)
{
    RAC_BUTTON = malloc(sizeof(*RAC_BUTTON));
    RAC_BUTTON->name = NULL;
    RAC_BUTTON->value = 0;
    RAC_BUTTON->next = RAC_BUTTON;
}

void create_button(PAINT_T *paint, char *name)
{
    BUTTONLIST_T *new = malloc(sizeof(*new));
    new->name = name;
    new->value = 0;
    new->next = RAC_BUTTON->next;
    RAC_BUTTON->next = new;
}

int get_button_value(PAINT_T *paint, char *name)
{
    BUTTONLIST_T *list;
    for (list = RAC_BUTTON->next; list != RAC_BUTTON; list = list->next) {
        if (my_strcmp(list->name, name) == 0) {
            return list->value;
        }
    }
    return -1;
}

int set_button_value(PAINT_T *paint, char *name, int value)
{
    BUTTONLIST_T *list;
    for (list = RAC_BUTTON->next; list != RAC_BUTTON; list = list->next) {
        if (my_strcmp(list->name, name) == 0) {
            list->value = value;
        }
    }
    return -1;
}

void init_button(PAINT_T *paint)
{
    create_button(paint, "file_menu");
    create_button(paint, "is_drawing");
    create_button(paint, "edit_menu");
    create_button(paint, "pinceau");
    create_button(paint, "gomme");
    create_button(paint, "rond");
    create_button(paint, "carré");
    create_button(paint, "help");
    create_button(paint, "button");
    create_button(paint, "about");
    create_button(paint, "aide");
    setbv(paint, "rond", 1);
}

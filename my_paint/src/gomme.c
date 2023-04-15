/*
** EPITECH PROJECT, 2023
** B-MUL-200-LIL-2-1-mypaint-remi.fernandez
** File description:
** TODO: add description
*/
#include "../includes/my.h"

void select_gomme(PAINT_T *paint)
{
    if (is_mouse_on(paint, "gomme") == 1 && getbv(paint, "gomme") != 1 &&
    getbv(paint, "edit_menu") == 1) {
        set_button_value(paint, "gomme", 1);
        set_button_value(paint, "pinceau", 0);
    } else if (is_mouse_on(paint, "gomme") == 1 && getbv(paint, "gomme") == 1)
        set_button_value(paint, "gomme", 0);
    if (is_mouse_on(paint, "rond") == 1 && getbv(paint, "rond") != 1) {
        set_button_value(paint, "rond", 1);
        set_button_value(paint, "carré", 0);
    } if (is_mouse_on(paint, "carré") == 1 && getbv(paint, "carré") != 1) {
        set_button_value(paint, "carré", 1);
        set_button_value(paint, "rond", 0);
    }
}

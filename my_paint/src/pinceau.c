/*
** EPITECH PROJECT, 2023
** B-MUL-200-LIL-2-1-mypaint-remi.fernandez
** File description:
** TODO: add description
*/
#include "../includes/my.h"

void select_pinceau(PAINT_T *paint)
{
    if (is_mouse_on(paint, "pinceau") == 1 && getbv(paint, "pinceau") != 1 &&
    getbv(paint, "edit_menu") == 1) {
        setbv(paint, "pinceau", 1);
        setbv(paint, "gomme", 0);
        setbv(paint, "carré", 0);
        setbv(paint, "rond", 1);
    } else if (is_mouse_on(paint, "pinceau") == 1 && getbv(paint, "pinceau")
    == 1)
        setbv(paint, "pinceau", 0);
}

void pinceau_setting(PAINT_T *paint, sfColor file_menu_color)
{
    if (getbv(paint, "pinceau") == 0)
        sfSprite_setColor(get_sprite(paint, "pinceau"), file_menu_color);
    if (getbv(paint, "pinceau") == 1)
        sfSprite_setColor(get_sprite(paint, "pinceau"), sfGreen);
    if (getbv(paint, "pinceau") == 2)
        sfSprite_setColor(get_sprite(paint, "pinceau"), sfRed);
    if (is_mouse_on(paint, "incr_size"))
        sfSprite_setColor(get_sprite(paint, "incr_size"), sfRed);
    else
        sfSprite_setColor(get_sprite(paint, "incr_size"), sfWhite);
    if (is_mouse_on(paint, "decr_size"))
        sfSprite_setColor(get_sprite(paint, "decr_size"), sfRed);
    else
        sfSprite_setColor(get_sprite(paint, "decr_size"), sfWhite);
}

void incr_thickness(PAINT_T *paint)
{
    if (is_mouse_on(paint, "incr_size")) {
        paint->thickness += 1;
        sfText_setString(get_text(paint, "thickness"), my_int_to_str
        (paint->thickness));
    }
    if (is_mouse_on(paint, "decr_size")) {
        paint->thickness -= 1;
        sfText_setString(get_text(paint, "thickness"), my_int_to_str
            (paint->thickness));
    }
}

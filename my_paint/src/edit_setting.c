/*
** EPITECH PROJECT, 2023
** B-MUL-200-LIL-2-1-mypaint-remi.fernandez
** File description:
** edit menu
*/

#include "../includes/my.h"

void open_edit_bar(PAINT_T *paint)
{
    if (is_mouse_on(paint, "edit") == 1)
        setbv(paint, "edit_menu", 1);
    else if (is_mouse_on(paint, "edit_menu") == 0) {
        setbv(paint, "edit_menu", 0);
    }
    select_pinceau(paint);
    select_gomme(paint);
}

void edit_setting(PAINT_T *paint, sfColor file_menu_color)
{
    if (getbv(paint, "edit_menu") == 1) {
        draw_sprite(paint, "edit_menu");
        draw_sprite(paint, "pinceau");
        draw_sprite(paint, "gomme");
    }
    if (getbv(paint, "edit_menu") == 1) {
        sfSprite_setColor(get_sprite(paint, "edit"), sfGreen);
    }
    if (getbv(paint, "edit_menu") == 2) {
        sfSprite_setColor(get_sprite(paint, "edit"), sfRed);
    }
    if (getbv(paint, "edit_menu") == 0)
        sfSprite_setColor(get_sprite(paint, "edit"), file_menu_color);
    pinceau_setting(paint, file_menu_color);
    gomme_setting(paint, file_menu_color);
}

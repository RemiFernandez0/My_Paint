/*
** EPITECH PROJECT, 2023
** B-MUL-200-LIL-2-1-mypaint-remi.fernandez
** File description:
** TODO: add description
*/
#include "../includes/my.h"

void open_file_bar(PAINT_T *paint)
{
    if (is_mouse_on(paint, "file") == 1)
        setbv(paint, "file_menu", 1);
    else if (is_mouse_on(paint, "file_menu") == 0) {
        setbv(paint, "file_menu", 0);
    }
}

void draw_file_setting(PAINT_T *paint)
{
    if (getbv(paint, "file_menu") == 1) {
        draw_sprite(paint, "file_menu");
        draw_sprite(paint, "new_file");
        draw_sprite(paint, "open_file");
        draw_sprite(paint, "save");
    }
}

void file_setting(PAINT_T *paint, sfColor file_menu_color)
{
    draw_file_setting(paint);
    if (getbv(paint, "file_menu") == 1)
        sfSprite_setColor(get_sprite(paint, "file"), sfGreen);
    if (getbv(paint, "file_menu") == 2)
        sfSprite_setColor(get_sprite(paint, "file"), sfRed);
    if (getbv(paint, "file_menu") == 0)
        sfSprite_setColor(get_sprite(paint, "file"), file_menu_color);
    if (is_mouse_on(paint, "new_file"))
        sfSprite_setColor(get_sprite(paint, "new_file"), sfRed);
    else
        sfSprite_setColor(get_sprite(paint, "new_file"), sfWhite);
    if (is_mouse_on(paint, "open_file"))
        sfSprite_setColor(get_sprite(paint, "open_file"), sfRed);
    else
        sfSprite_setColor(get_sprite(paint, "open_file"), sfWhite);
    if (is_mouse_on(paint, "save"))
        sfSprite_setColor(get_sprite(paint, "save"), sfRed);
    else
        sfSprite_setColor(get_sprite(paint, "save"), sfWhite);
}

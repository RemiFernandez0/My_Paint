/*
** EPITECH PROJECT, 2023
** B-MUL-200-LIL-2-1-mypaint-remi.fernandez
** File description:
** TODO: add description
*/
#include "../includes/my.h"

void open_help_bar(PAINT_T *paint)
{
    if (is_mouse_on(paint, "help") == 1 && getbv(paint, "help") != 1)
        setbv(paint, "help", 1);
    else if (is_mouse_on(paint, "help_menu") == 0) {
        setbv(paint, "help", 0);
    }
    if (is_mouse_on(paint, "about") == 1 && getbv(paint, "about") != 1)
        setbv(paint, "about", 1);
    else if (is_mouse_on(paint, "about") == 0 || is_mouse_on(paint,
    "about") == 1 && getbv(paint, "about") == 1) {
        setbv(paint, "about", 0);
    }
    if (is_mouse_on(paint, "aide") == 1 && getbv(paint, "aide") != 1)
        setbv(paint, "aide", 1);
    else if (is_mouse_on(paint, "aide") == 0 || is_mouse_on(paint,
    "aide") == 1 && getbv(paint,"aide") == 1) {
        setbv(paint, "aide", 0);
    }
}

void draw_help_setting(PAINT_T *paint)
{
    if (getbv(paint, "help") == 1) {
        draw_sprite(paint, "help_menu");
        draw_sprite(paint, "about");
        draw_sprite(paint, "aide");
    }
}

void help_setting2(PAINT_T *paint, sfColor file_menu_color)
{
    if (getbv(paint, "about") == 1 && getbv(paint, "help_menu") == 1) {
        sfSprite_setColor(get_sprite(paint, "about"), sfGreen);
        draw_sprite(paint, "about_window");
    } if (is_mouse_on(paint, "aide") == 1 && getbv(paint, "aide") == 0)
        sfSprite_setColor(get_sprite(paint, "aide"), sfRed);
    else if (getbv(paint, "aide") == 0)
        sfSprite_setColor(get_sprite(paint, "aide"), sfWhite);
    if (getbv(paint, "aide") == 1 && getbv(paint, "aide") == 1) {
        sfSprite_setColor(get_sprite(paint, "aide"), sfGreen);
        draw_sprite(paint, "aide_window");
    }
    draw_help_setting(paint);
}

void help_setting(PAINT_T *paint, sfColor file_menu_color)
{
    if (is_mouse_on(paint, "help") == 1 && getbv(paint, "help") == 0)
        sfSprite_setColor(get_sprite(paint, "help"), sfRed);
    else if (getbv(paint, "help") == 0)
        sfSprite_setColor(get_sprite(paint, "help"), sfWhite);
    if (getbv(paint, "help") == 1)
        sfSprite_setColor(get_sprite(paint, "help"), sfGreen);
    draw_help_setting(paint);
    if (is_mouse_on(paint, "about") == 1 && getbv(paint, "about") == 0)
        sfSprite_setColor(get_sprite(paint, "about"), sfRed);
    else if (getbv(paint, "about") == 0)
        sfSprite_setColor(get_sprite(paint, "about"), sfWhite);
    help_setting2(paint, file_menu_color);
}

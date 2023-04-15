/*
** EPITECH PROJECT, 2023
** B-MUL-200-LIL-2-1-mypaint-remi.fernandez
** File description:
** TODO: add description
*/
#include "../includes/my.h"

void cond_setting3(PAINT_T *paint, sfColor file_menu_color)
{
    if (getbv(paint, "carré") == 1)
        sfSprite_setColor(get_sprite(paint, "carré"), sfGreen);
    if (getbv(paint, "carré") == 2)
        sfSprite_setColor(get_sprite(paint, "carré"), sfRed);
    if (getbv(paint, "carré") == 0)
        sfSprite_setColor(get_sprite(paint, "carré"), sfWhite);
}

void cond_setting2(PAINT_T *paint, sfColor file_menu_color)
{
    if (getbv(paint, "rond") == 1)
        sfSprite_setColor(get_sprite(paint, "rond"), sfGreen);
    if (getbv(paint, "rond") == 2)
        sfSprite_setColor(get_sprite(paint, "rond"), sfRed);
    cond_setting3(paint, file_menu_color);
}

void gomme_setting(PAINT_T *paint, sfColor file_menu_color)
{
    if (getbv(paint, "gomme") == 0)
        sfSprite_setColor(get_sprite(paint, "gomme"),
    file_menu_color);
    if (getbv(paint, "gomme") == 1)
        sfSprite_setColor(get_sprite(paint, "gomme"), sfGreen);
    if (getbv(paint, "gomme") == 2)
        sfSprite_setColor(get_sprite(paint, "gomme"), sfRed);
    if (getbv(paint, "rond") == 0)
        sfSprite_setColor(get_sprite(paint, "rond"), sfWhite);
    cond_setting2(paint, file_menu_color);
}

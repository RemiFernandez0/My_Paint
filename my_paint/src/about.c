/*
** EPITECH PROJECT, 2023
** B-MUL-200-LIL-2-1-mypaint-remi.fernandez
** File description:
** TODO: add description
*/

#include "../includes/my.h"

void draw_about_window(PAINT_T *paint)
{
    if (getbv(paint, "about") == 1)
        draw_sprite(paint, "about_window");
}

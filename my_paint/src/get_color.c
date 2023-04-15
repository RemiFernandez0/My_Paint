/*
** EPITECH PROJECT, 2023
** B-MUL-200-LIL-2-1-mypaint-remi.fernandez
** File description:
** TODO: add description
*/

#include "../includes/my.h"

void get_color(PAINT_T *paint)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(WINDOW);
    sfVector2f world_pos = sfRenderWindow_mapPixelToCoords(WINDOW, mouse_pos,
    sfRenderWindow_getView(WINDOW));
    sfImage* screenshot = sfRenderWindow_capture(WINDOW);
    sfColor pixel_color = sfImage_getPixel(screenshot,
    (unsigned int)world_pos.x,
    (unsigned int)world_pos.y);
    sfColor color = {pixel_color.r, pixel_color.g, pixel_color.b,
    pixel_color.a};
    paint->color = color;
    sfImage_destroy(screenshot);
}

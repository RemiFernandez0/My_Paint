/*
** EPITECH PROJECT, 2023
** B-MUL-200-LIL-2-1-mypaint-remi.fernandez
** File description:
** TODO: add description
*/
#include "../includes/my.h"

int init_text(PAINT_T *paint)
{
    paint->thickness = 5.0f;
    sfFont *font;
    create_text(paint, "thickness", my_int_to_str(paint->thickness));
    if (!(font = sfFont_createFromFile("assets/RockFont.ttf")))
        return 84;
    sfText_setFont(get_text(paint, "thickness"), font);
    sfText_setScale(get_text(paint, "thickness"), (sfVector2f){0.55, 0.55});
    sfText_setPosition(get_text(paint, "thickness"), (sfVector2f){145, 363});
    return 0;
}

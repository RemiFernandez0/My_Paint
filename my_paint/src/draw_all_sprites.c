/*
** EPITECH PROJECT, 2023
** B-MUL-200-LIL-2-1-mypaint-remi.fernandez
** File description:
** TODO: add description
*/

#include "../includes/my.h"


void draw_pinceau_side_menu(PAINT_T *paint)
{
    draw_sprite(paint, "side_menu");
    draw_sprite(paint, "icone_pinceau");
    draw_sprite(paint, "size_bar");
    draw_sprite(paint, "incr_size");
    draw_sprite(paint, "decr_size");
    draw_sprite(paint, "colors");
    sfRenderWindow_drawText(WINDOW, get_text(paint, "thickness"), NULL);
}

void draw_gomme_side_menu(PAINT_T *paint)
{
    draw_sprite(paint, "side_menu");
    draw_sprite(paint, "icone_gomme");
    draw_sprite(paint, "size_bar");
    draw_sprite(paint, "incr_size");
    draw_sprite(paint, "decr_size");
    draw_sprite(paint, "rond");
    draw_sprite(paint, "carré");
    sfRenderWindow_drawText(WINDOW, get_text(paint, "thickness"), NULL);
}

void draw_all_sprites(PAINT_T *paint)
{
    draw_sprite(paint, "background");
    draw_sprite(paint, "white_paper");
    draw_sprite(paint, "file");
    draw_sprite(paint, "edit");
    draw_sprite(paint, "help");
    if (getbv(paint, "pinceau") == 1)
        draw_pinceau_side_menu(paint);
    if (getbv(paint, "gomme") == 1)
        draw_gomme_side_menu(paint);
}

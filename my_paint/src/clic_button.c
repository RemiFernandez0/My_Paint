/*
** EPITECH PROJECT, 2023
** B-MUL-200-LIL-2-1-mypaint-remi.fernandez
** File description:
** TODO: add description
*/

#include "../includes/my.h"

void handle_clic(PAINT_T *paint, sfEvent *event)
{
    if (event->type == sfEvtMouseButtonPressed) {
        open_file_bar(paint);
        open_edit_bar(paint);
        open_help_bar(paint);
        incr_thickness(paint);
        if (is_mouse_on(paint, "colors") == 1 && getbv(paint, "pinceau") == 1)
            get_color(paint);
        if (is_mouse_on(paint, "save") == 1 && getbv(paint,
        "file_menu") == 1)
            save_file(paint);
        if (is_mouse_on(paint, "new_file") == 1 && getbv(paint,
        "file_menu") == 1)
            new_file(paint);
    }
}

int is_mouse_on(PAINT_T *paint, char *name)
{
    sfVector2i mousePos = sfMouse_getPositionRenderWindow(WINDOW);
    sfFloatRect rect = sfSprite_getGlobalBounds(get_sprite(paint, name));
    if (sfFloatRect_contains(&rect, mousePos.x, mousePos.y)) {
        return 1;
    } else
        return 0;
}

void modify_button_state(PAINT_T *paint)
{
    if (is_mouse_on(paint, "file") == 1 && getbv(paint, "file_menu") == 0)
        setbv(paint, "file_menu", 2);
    else if (is_mouse_on(paint, "file") == 0 && getbv(paint, "file_menu") == 2)
        setbv(paint, "file_menu", 0);
    if (is_mouse_on(paint, "edit") == 1 && getbv(paint, "edit_menu") == 0)
        setbv(paint, "edit_menu", 2);
    else if (is_mouse_on(paint, "edit") == 0 && getbv(paint, "edit_menu") == 2)
        setbv(paint, "edit_menu", 0);
    if (is_mouse_on(paint, "pinceau") == 1 && getbv(paint, "pinceau") == 0)
        setbv(paint, "pinceau", 2);
    else if (is_mouse_on(paint, "pinceau") == 0 && getbv(paint, "pinceau") == 2)
        setbv(paint, "pinceau", 0);
    modify_button_state2(paint);
}

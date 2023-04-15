/*
** EPITECH PROJECT, 2023
** B-MUL-200-LIL-2-1-mypaint-remi.fernandez
** File description:
** TODO: add description
*/
#include "../includes/my.h"

void modify_button_state2(PAINT_T *paint)
{
    if (is_mouse_on(paint, "gomme") == 1 && getbv(paint, "gomme") == 0)
        setbv(paint,"gomme", 2);
    else if (is_mouse_on(paint, "gomme") == 0 && getbv(paint, "gomme") == 2)
        setbv(paint, "gomme", 0);
    if (is_mouse_on(paint, "rond") == 1 && getbv(paint, "rond") == 0)
        setbv(paint,"rond", 2);
    else if (is_mouse_on(paint, "rond") == 0 && getbv(paint, "rond") == 2)
        setbv(paint, "rond", 0);
    if (is_mouse_on(paint, "carré") == 1 && getbv(paint, "carré") == 0)
        setbv(paint,"carré", 2);
    else if (is_mouse_on(paint, "carré") == 0 && getbv(paint, "carré") == 2)
        setbv(paint, "carré", 0);
}

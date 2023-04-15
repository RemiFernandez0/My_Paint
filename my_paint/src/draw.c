/*
** EPITECH PROJECT, 2023
** B-MUL-200-LIL-2-1-mypaint-remi.fernandez
** File description:
** TODO: add description
*/

#include "../includes/my.h"

void if_drawing(PAINT_T *paint, sfEvent *event, sfVertexArray *carrer)
{
        if (event->type == sfEvtMouseButtonPressed &&
            event->mouseButton.button ==
            sfMouseLeft && is_mouse_on(paint, "white_paper") == 1 &&
            (getbv(paint, "pinceau") == 1 || getbv(paint, "gomme") == 1)) {
            setbv(paint, "is_drawing", 1);
            sfVector2i position = sfMouse_getPositionRenderWindow(WINDOW);
            if (getbv(paint, "carré") == 1)
                drawing_carrer(paint, event, carrer);
            if (getbv(paint, "rond") == 1)
                drawing_circle(paint, event);
        } else if (event->type == sfEvtMouseButtonReleased && event->mouseButton
        .button == sfMouseLeft) {
            setbv(paint, "is_drawing", 0);
        }
}

void drawing_circle(PAINT_T* paint, sfEvent* event)
{
    if ((getbv(paint, "pinceau") == 1 || getbv(paint, "gomme") == 1) && getbv
    (paint,"is_drawing") == 1 && is_mouse_on(paint, "white_paper") == 1) {
        sfVector2i position = sfMouse_getPositionRenderWindow(WINDOW);
        sfColor color = getbv(paint, "pinceau") ? paint->color : sfWhite;
        float radius = paint->thickness;int triangleCount = 360;
        sfVertex vertices[triangleCount * 3];
        for (int i = 0; i < triangleCount; i++) {
            sfVector2f v1 = (sfVector2f){position.x, position.y};
            int v2y = position.y + radius * sin(i * M_PI / 180.0f);
            sfVector2f v2 = (sfVector2f){position.x + radius * cos(i * M_PI /
            180.0f), v2y}; int v3y = position.y + radius * sin((i + 1) * M_PI
            / 180.0f); sfVector2f v3 = (sfVector2f){position.x + radius * cos
            ((i + 1) * M_PI / 180.0f), v3y};
            vertices[i * 3].position = v1;vertices[i * 3].color = color;
            vertices[i * 3 + 1].position = v2;vertices[i * 3 + 1].color = color;
            vertices[i * 3 + 2].position = v3;vertices[i * 3 + 2].color = color;
        }sfVertexArray_setPrimitiveType(paint->lines, sfTriangles);
        for (int i = 0; i < triangleCount * 3; i++)
            sfVertexArray_append(paint->lines, vertices[i]);
    }
}

void append_square_vertex(PAINT_T *paint, sfVertexArray *carrer, sfVertex
*vertex, sfVector2i *position)
{
    for (int j = 0; j < paint->thickness * 2; j++) {
        for (int i = 0; i < paint->thickness * 2; i++) {
            vertex->position.x += 1;
            sfVertexArray_append(carrer, *vertex);
        }
        vertex->position.x = position->x;
        vertex->position.y += 1;
    }
}

void drawing_carrer(PAINT_T *paint, sfEvent * event, sfVertexArray *carrer)
{
        sfVertex vertex;
        if (is_mouse_on(paint, "white_paper") == 1 && getbv(paint, "gomme")
        == 1 && getbv(paint, "is_drawing") == 1) {
            sfVector2i position = sfMouse_getPositionRenderWindow(WINDOW);
            vertex.position.x = position.x;
            vertex.position.y = position.y;
            vertex.color = sfWhite;
            append_square_vertex(paint, carrer, &vertex, &position);
    }
}

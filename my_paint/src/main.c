/*
** EPITECH PROJECT, 2023
** B-MUL-200-LIL-2-1-mypaint-remi.fernandez
** File description:
** TODO: add description
*/
#include "../includes/my.h"

sfRenderWindow *create_window(unsigned int width,unsigned int height,int bits)
{
    sfRenderWindow *window;
    sfVideoMode video_mode;
    video_mode.width = width;
    video_mode.height = height;
    video_mode.bitsPerPixel = bits;
    window = sfRenderWindow_create(video_mode,"My_Paint",sfResize | sfClose,
    NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    return (window);
}

void close_window(PAINT_T *paint, sfEvent *event)
{
    if (event->type == sfEvtClosed)
        sfRenderWindow_close(WINDOW);
}

void paint_loop(PAINT_T *paint)
{
    sfVertexArray *carrer = sfVertexArray_create(); sfEvent event;
    sfColor file_menu_color = sfSprite_getColor(get_sprite(paint, "file_menu"));
    while (sfRenderWindow_isOpen(WINDOW)) {
        sfRenderWindow_clear(WINDOW, sfBlack);
        modify_button_state(paint); draw_all_sprites(paint);
        file_setting(paint, file_menu_color);
        edit_setting(paint, file_menu_color);
        help_setting(paint, file_menu_color);
        if (getbv(paint, "rond") == 1)
            drawing_circle(paint, &event);
        if (getbv(paint, "carré") == 1)
            drawing_carrer(paint, &event, carrer);
        sfRenderWindow_drawVertexArray(WINDOW, paint->lines, NULL);
        sfRenderWindow_drawVertexArray(WINDOW, carrer, NULL);
        sfRenderWindow_display(WINDOW);
        while (sfRenderWindow_pollEvent(WINDOW, &event)) {
            close_window(paint, &event); handle_clic(paint, &event);
            if_drawing(paint, &event, carrer);
        }
    }sfRenderWindow_destroy(WINDOW); return 0;
}

int main(void)
{
    PAINT_T paint;
    paint.lines = sfVertexArray_create();
    paint.color = sfBlack;
    initialise_sprite_list(&paint);
    initialise_button_list(&paint);
    initialise_text_list(&paint);
    if (init_text(&paint) == 84)
        return 84;
    if (init_sprites(&paint) == 84)
        return 84;
    init_button(&paint);
    paint.window = create_window(1920, 1080 , 64);
    paint_loop(&paint);
    return 0;
}

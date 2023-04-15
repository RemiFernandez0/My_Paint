/*
** EPITECH PROJECT, 2023
** B-MUL-200-LIL-2-1-mypaint-remi.fernandez
** File description:
** TODO: add description
*/

#include "../includes/my.h"

void set_sprites_pos2(PAINT_T *paint)
{
    sfSprite_setPosition(get_sprite(paint, "incr_size"), (sfVector2f){210,
    368});
    sfSprite_setPosition(get_sprite(paint, "decr_size"), (sfVector2f){210,
    378});
    sfSprite_setPosition(get_sprite(paint, "rond"), (sfVector2f){50, 430});
    sfSprite_setPosition(get_sprite(paint, "carré"), (sfVector2f){150, 430});
    sfSprite_setPosition(get_sprite(paint, "new_file"), (sfVector2f){0, 25});
    sfSprite_setPosition(get_sprite(paint, "open_file"), (sfVector2f){-1, 50});
    sfSprite_setPosition(get_sprite(paint, "save"), (sfVector2f){0, 75});
    sfSprite_setPosition(get_sprite(paint, "icone_pinceau"), (sfVector2f){105,
    310});
    sfSprite_setPosition(get_sprite(paint, "icone_gomme"), (sfVector2f){115,
    308});
    sfSprite_setPosition(get_sprite(paint, "colors"), (sfVector2f){50,
    390});
    sfSprite_setPosition(get_sprite(paint, "help"), (sfVector2f){96, 0});
    sfSprite_setPosition(get_sprite(paint, "about_window"), (sfVector2f){790,
    350});
    sfSprite_setPosition(get_sprite(paint, "aide_window"), (sfVector2f){690,
    350});
}

void set_sprites_pos(PAINT_T *paint)
{
    sfSprite_setOrigin(get_sprite(paint, "white_paper"), (sfVector2f){960,
    540});
    sfSprite_setPosition(get_sprite(paint, "white_paper"), (sfVector2f){960,
    500});
    sfSprite_setPosition(get_sprite(paint, "file_menu"), (sfVector2f){0,
    24.5});
    sfSprite_setPosition(get_sprite(paint, "edit") , (sfVector2f){48,0});
    sfSprite_setPosition(get_sprite(paint, "edit_menu") ,
    (sfVector2f){48,24.5});
    sfSprite_setPosition(get_sprite(paint, "pinceau") ,
    (sfVector2f){48,27.5});
    sfSprite_setPosition(get_sprite(paint, "gomme") ,
    (sfVector2f){48,58});
    sfSprite_setPosition(get_sprite(paint, "side_menu"), (sfVector2f){0, 300});
    sfSprite_setPosition(get_sprite(paint, "size_bar"), (sfVector2f){-40,
    200});
    sfSprite_setPosition(get_sprite(paint, "help_menu"), (sfVector2f){96,24.5});
    sfSprite_setPosition(get_sprite(paint, "about"), (sfVector2f){96,24.5});
    sfSprite_setPosition(get_sprite(paint, "aide"), (sfVector2f){96,50});
    set_sprites_pos2(paint);
}

void set_sprites_scale(PAINT_T *paint)
{
    sfSprite_setScale(get_sprite(paint, "white_paper"),
    (sfVector2f){0.67, 0.67});
    sfSprite_setScale(get_sprite(paint, "size_bar"),
    (sfVector2f){1.2, 1.2});
    sfSprite_setScale(get_sprite(paint, "rond"),
    (sfVector2f){0.3, 0.3});
    sfSprite_setScale(get_sprite(paint, "carré"),
    (sfVector2f){0.3, 0.3});
    sfSprite_setScale(get_sprite(paint, "icone_pinceau"),
    (sfVector2f){0.3, 0.3});
    sfSprite_setScale(get_sprite(paint, "icone_gomme"),
    (sfVector2f){0.26, 0.26});
    sfSprite_setScale(get_sprite(paint, "colors"),
    (sfVector2f){0.7, 0.7});
}

int init_sprite2(PAINT_T *paint)
{
    int status = 0;
    create_sprite(paint, "incr_size", "assets/aug_size.png");
    create_sprite(paint, "decr_size", "assets/decr_size.png");
    create_sprite(paint, "rond", "assets/rond.jpeg");
    create_sprite(paint, "carré", "assets/carré.png");
    create_sprite(paint, "new_file", "assets/new_file.png");
    create_sprite(paint, "open_file", "assets/open_file.png");
    create_sprite(paint, "save", "assets/save.png");
    create_sprite(paint, "icone_pinceau", "assets/logo_pinceau.png");
    create_sprite(paint, "icone_gomme", "assets/logo_gomme.png");
    create_sprite(paint, "colors", "assets/colors.jpg");
    create_sprite(paint, "about", "assets/about.png");
    create_sprite(paint, "about_window", "assets/about_window.png");
    create_sprite(paint, "aide", "assets/aide.png");
    status = create_sprite(paint, "aide_window", "assets/help_window.png");
    set_sprites_scale(paint);
    set_sprites_pos(paint);
    return status;
}

int init_sprites(PAINT_T *paint)
{
    int status = 0;
    create_sprite(paint, "background", "assets/background.jpg");
    create_sprite(paint, "white_paper", "assets/white_paper.png");
    create_sprite(paint, "file", "assets/fichier.png");
    create_sprite(paint, "file_menu", "assets/empty_menu.png");
    create_sprite(paint, "pinceau", "assets/pinceau.png");
    create_sprite(paint, "edit", "assets/edit.png");
    create_sprite(paint, "edit_menu", "assets/empty_menu.png");
    create_sprite(paint, "gomme", "assets/gomme.png");
    create_sprite(paint, "side_menu",
    "assets/side_menu_background.png");
    create_sprite(paint, "size_bar", "assets/size_bar.png");
    create_sprite(paint, "help", "assets/help.png");
    status = create_sprite(paint, "help_menu", "assets/empty_menu.png");
    status = init_sprite2(paint);
    return status;
}

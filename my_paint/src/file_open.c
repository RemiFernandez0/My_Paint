/*
** EPITECH PROJECT, 2023
** my paint
** File description:
** open save and new file
*/

#include "../includes/my.h"

char *get_file_name(PAINT_T *paint)
{
    size_t size = 2048;
    int status = 0;
    char *input = NULL;
    if (!(input = malloc(sizeof(char) * size)))
        return;
    write(1, "\nEntrer un nom de fichier: ", 27);
    getline(&input, &size, stdin);
    input[my_strlen(input) - 1] = '\0';
    return input;
}

void save_file(PAINT_T *paint)
{
    sfRenderTexture *tmp = sfRenderTexture_create(1920, 1080, sfFalse);
    sfRenderTexture_clear(tmp, sfWhite);
    sfRenderTexture_drawVertexArray(tmp, paint->lines, NULL);
    sfRenderTexture_display(tmp);
    const sfTexture* tex = sfRenderTexture_getTexture(tmp);
    sfImage* screenshot = sfTexture_copyToImage(tex);
    sfRenderTexture_destroy(tmp);
    sfImage_saveToFile(screenshot, get_file_name(paint));
    sfImage_destroy(screenshot);
}

void new_file(PAINT_T *paint)
{
    sfVertexArray_clear(paint->lines);
}

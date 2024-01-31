/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-damian.gil
** File description:
** cases_colors_next
*/

#include <stdlib.h>
#include <unistd.h>
#include <SFML/Audio.h>
#include <stdio.h>
#include <SFML/Graphics.h>
#include <math.h>
#include "utils.h"
#include "my.h"
#include "goto.h"
#include "defines.h"
#include "positions.h"

void case_purple(rpg_t *rpg, sfVector2f pixel_pos, sfIntRect rect)
{
    if (check_purple(rpg, (sfVector2f)
        {pixel_pos.x - (rect.width / 2 / MAP_SCALE),
        pixel_pos.y - (rect.height / 2 / MAP_SCALE)}) ||
        check_purple(rpg, (sfVector2f)
        {pixel_pos.x + (rect.width / 2 / MAP_SCALE),
        pixel_pos.y - (rect.height / 2 / MAP_SCALE)}) ||
        check_purple(rpg, (sfVector2f)
        {pixel_pos.x + (rect.width / 2 / MAP_SCALE),
        pixel_pos.y + (rect.height / 2 / MAP_SCALE)}) ||
        check_purple(rpg, (sfVector2f)
        {pixel_pos.x - (rect.width / 2 / MAP_SCALE),
        pixel_pos.y + (rect.height / 2 / MAP_SCALE)})) {
        cases_purple_coll(rpg);
    }
}

void case_grey(rpg_t *rpg, sfVector2f pixel_pos, sfIntRect rect)
{
    if (check_grey(rpg, (sfVector2f)
        {pixel_pos.x - (rect.width / 2 / MAP_SCALE),
        pixel_pos.y - (rect.height / 2 / MAP_SCALE)}) ||
        check_grey(rpg, (sfVector2f)
        {pixel_pos.x + (rect.width / 2 / MAP_SCALE),
        pixel_pos.y - (rect.height / 2 / MAP_SCALE)}) ||
        check_grey(rpg, (sfVector2f)
        {pixel_pos.x + (rect.width / 2 / MAP_SCALE),
        pixel_pos.y + (rect.height / 2 / MAP_SCALE)}) ||
        check_grey(rpg, (sfVector2f)
        {pixel_pos.x - (rect.width / 2 / MAP_SCALE),
        pixel_pos.y + (rect.height / 2 / MAP_SCALE)})) {
        cases_grey_coll(rpg);
    }
}

void case_orange(rpg_t *rpg, sfVector2f pixel_pos, sfIntRect rect)
{
    if (check_orange(rpg, (sfVector2f)
        {pixel_pos.x - (rect.width / 2 / MAP_SCALE),
        pixel_pos.y - (rect.height / 2 / MAP_SCALE)}) ||
        check_orange(rpg, (sfVector2f)
        {pixel_pos.x + (rect.width / 2 / MAP_SCALE),
        pixel_pos.y - (rect.height / 2 / MAP_SCALE)}) ||
        check_orange(rpg, (sfVector2f)
        {pixel_pos.x + (rect.width / 2 / MAP_SCALE),
        pixel_pos.y + (rect.height / 2 / MAP_SCALE)}) ||
        check_orange(rpg, (sfVector2f)
        {pixel_pos.x - (rect.width / 2 / MAP_SCALE),
        pixel_pos.y + (rect.height / 2 / MAP_SCALE)})) {
        cases_orange_coll(rpg);
    }
}

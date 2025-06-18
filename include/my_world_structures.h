/*
** EPITECH PROJECT, 2021
** my_world_structures.h
** File description:
** my_world_structures.h
*/

#ifndef MY_WORLD_STRUCTURES_
#define MY_WORLD_STRUCTURES_

#include <SFML/Window/VideoMode.h>
#include <SFML/System/Vector2.h>
#include <SFML/Graphics.h>
#include <SFML/Window/Event.h>
#include <SFML/Window/Window.h>
#include <stdbool.h>

typedef struct button_rect_s button_rect_t;
typedef struct button_circle_s button_circle_t;

typedef struct menu_s {
    sfTexture *background_texture;
    sfSprite *background_sprite;
    button_rect_t **menu_buttons;
} menu_t;

typedef struct coord_s {
    int x;
    int y;
} coord_t;

typedef struct game_s {
    sfTexture *background_texture;
    sfSprite *background_sprite;
    button_circle_t **game_buttons;
    sfVector2i size_map;
    sfVector2f **map;
    sfVector2i angle;
    sfConvexShape ***map_textures;
    int **d_map;
    int zoom;
    int index_mode;
    sfSprite **sprite_mode;
    sfIntRect **intrect_mode;
    sfTexture *grid_texture;
    sfVector2i size_px_map;
    sfSprite **red_spheres;
    int dis_zero_to_rigth;
    bool pressing_texture;
    bool vertex_pressed;
    coord_t *vertex_selected;
    sfTexture **sphere_textures;
} game_t;

typedef struct context_s {
    sfVideoMode video;
    sfRenderWindow *window;
    sfEvent event;
    sfContextSettings *settings;
} context_t;

typedef struct objects_s {
    bool menu_or_game;
    menu_t *menu;
    game_t *game;
} objects_t;

struct button_rect_s {
    sfRectangleShape *rect;
    void (*callback)(sfRenderWindow *, objects_t *);
};

struct button_circle_s {
    sfCircleShape *circle;
    void (*callback)(sfRenderWindow *, objects_t *);
};

typedef struct line_s {
    sfVector2f p1;
    sfVector2f p2;
} line_t;

typedef struct s_intersect_points
{
    int nPoints;
    bool crossingLine;
    sfVector2f **intersectPoints;
    sfVector2f *p;
    line_t *point_line;
    line_t *shape_line;
    sfFloatRect bounds;
} t_intersect_points;

#endif /* !MY_WORLD_STRUCTURES_ */
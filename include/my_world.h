/*
** EPITECH PROJECT, 2021
** my_world.h
** File description:
** my_world.h
*/

#ifndef MY_WORLD_
#define MY_WORLD_

#include <SFML/System/Vector2.h>
#include <SFML/Graphics/Types.h>
#include <SFML/Window/Event.h>
#include "my_world_structures.h"

int helpfile(void);
int print_error(char *);

//UTILS
sfVector2f **create_2d_map(int **, sfVector2i, sfVector2i);
sfVertexArray *create_line(sfVector2f *, sfVector2f *);
sfVector2f project_iso_point(int x, int y, int z, sfVector2i);
context_t *init_context();
void resize_map(game_t *);
void print_map(sfVector2f **);
void handle_events(sfEvent, objects_t *);
int my_world(void);
void poll_event(context_t *, objects_t *);
void draw_2d_map(sfRenderWindow *, objects_t *);
sfVertexArray *create_line(sfVector2f *, sfVector2f *);
bool button_rect_is_clicked(button_rect_t *, sfVector2i);
bool button_circle_is_clicked(button_circle_t *, sfVector2i);
void update_map_textures(game_t *);

//INITS
objects_t *init_objects();
menu_t *init_objects_menu();
game_t *init_objects_game(sfVector2i);
int **init_int_matrix(sfVector2i);

//CALLBACKS
void callback_play_button(sfRenderWindow *, objects_t *);
void callback_exit_button(sfRenderWindow *, objects_t *);

//UTILS>DRAW>CONTEXT
void draw_background(context_t *, sfSprite *);
void draw_rect_buttons(context_t *, button_rect_t **);
void draw_circle_buttons(context_t *, button_circle_t **);
void draw_context(context_t *, objects_t *);

//SCENES>MENU
void draw_menu(context_t *, objects_t *);
void button_hover_menu(context_t *, objects_t *);
void check_buttons_menu(sfRenderWindow *, objects_t *);

//SCENES>SIMULATION
void draw_simulation(context_t *, objects_t *);
void button_hover_game(context_t *, objects_t *);
bool check_buttons_game(sfRenderWindow *, objects_t *);
void draw_texture_map(sfRenderWindow *, objects_t *);

//UTILS
void resize_map(game_t *);

//UTILS>VERIFICATIONS
bool is_point_in_rectangle(sfVector2i, sfRectangleShape *);
bool is_point_in_circle(sfVector2i, sfCircleShape *);
bool is_menu_active(objects_t *);

//UTILS>GETTERS
void get_initial_map(objects_t *);
int get_map_width(sfVector2f **, sfVector2i);
int get_map_height(sfVector2f **, sfVector2i);

//EVENTS
void event_closed(sfEvent, sfRenderWindow *);
void event_mouse_released(context_t *, objects_t *);
void event_scrolled(sfEvent, objects_t *);
void event_while_pressing(context_t *, objects_t *);
void event_up_down_pressed(sfEvent, objects_t *);

//PONER BIEN
sfConvexShape ***create_map_textures(sfVector2f **, sfVector2i);

//FREES
void free_context(context_t *);
void free_objects(objects_t *);
void free_menu(menu_t *);
void free_game(game_t *);
void free_array_intrect(sfIntRect **);
void free_array_sprites(sfSprite **);
void free_buttons_game(button_circle_t **);
void free_buttons_menu(button_rect_t **);
void free_maps(game_t *);
void free_texture_map(game_t *);

//INITS
button_circle_t *init_button_circle(sfVector2f, int,
void(*), char *);
sfConvexShape ***init_sfconvexshape_matrix(sfVector2i );
button_circle_t **init_buttons_game(void);
sfSprite **init_sprite_mode();
sfIntRect **init_intrect_mode();
char **init_texture_buttons();
sfSprite **init_array_sprites(int , char **);
void init_map_game(game_t *, sfVector2i);
void init_background_game(game_t *);

//CALLBACKS
void callback_game_texture(sfRenderWindow *, objects_t *);
void callback_game_reset(sfRenderWindow *, objects_t *);
void callback_game_help(sfRenderWindow *, objects_t *);

//IS_POINT_IN_CONVEX_SHAPE
int get_len_sfvector2f_matrix(sfVector2f **);
sfVector2f **copy_intersect_points(t_intersect_points *);
sfVector2f **return_intersect_points(t_intersect_points *);
void free_sfvector2f_matrix(sfVector2f **);
sfVector2f **get_intersection_points(sfConvexShape *, sfVector2i);
t_intersect_points *init_intersect_struct(sfConvexShape *);
sfVector2f **init_intersect_points();
void set_point_line(line_t *, sfVector2i, sfFloatRect);
void set_shape_line(line_t *, int, int, sfConvexShape *);
bool eval_crossing_line(line_t *, sfVector2i );
sfVector2f *intersection(line_t *, line_t *);
bool is_point_in_line(line_t *, sfVector2f *);
void add_intersect_point(sfVector2f ***, sfVector2f **);
void free_lines(line_t *, line_t *);
sfVector2f **resize_sfvector2f_matrix(sfVector2f **);
float distance(sfVector2f, sfVector2f);
bool is_point_in_convex_shape(sfConvexShape *, sfVector2i);

//UTILS
void center_map(game_t *);
void add_texture(sfVector2i, context_t *, objects_t *);
bool is_index_texture(objects_t *);
void handle_events_four_vertex(sfEvent, objects_t *);
void disable_green_sphere(objects_t *);

//PRINT_SPHERES
void print_one_static_sphere(context_t *, objects_t *);
void print_one_no_static_sphere(context_t *, objects_t *);
void print_one_red_sphere(context_t *, objects_t *);
void print_four_red_sphere(context_t *, objects_t *);

#endif /* !MY_WORLD_ */
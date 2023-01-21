#pragma once
#ifndef GAME_DATA
#define GAME_DATA

// -------------------------------------------------
// DEPENDENCIES
// -------------------------------------------------

#include "global.h"

// -------------------------------------------------
// GLOBAL DATA
// -------------------------------------------------

/* WINDOW DATA */
typedef struct _global_window {
    const char *NAME;
    const i32 WIDTH;
    const i32 HEIGHT;
} _global_window;


/* MAP DATA */
typedef enum {
    TILE_FLOOR = 0, 
    TILE_WALL = 1, 
    TILE_BOULDER = 2, 
    TILE_PLAYER = 9
} TILE_TYPES;

typedef struct _game_map_data {
    const i32 TILE_WIDTH;
    const i32 TILE_HEIGHT;
    const i32 WIDTH;
    const i32 HEIGHT;
    i32 **MapList;
} _game_map_data;


/* GAME STATE */
typedef struct _game_state {
    u32 CurrentLevel;
    i32 *CurrentMap;
    vec2 PlayerPos;
} _game_state;


/* GLOBAL DATA */
typedef struct _global {
    const _global_window WINDOW;
    _game_map_data MAP_DATA;
    _game_state GameState;
} _global;

// Access point to all global data
extern _global GLOBAL;

// -------------------------------------------------
// FUNCTIONS
// -------------------------------------------------

void init_game_data();

void game_set_CurrentMap(size_t mapID);

#endif
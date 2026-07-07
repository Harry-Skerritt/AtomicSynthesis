//
// Created by harryskerritt on 07/07/2026.
//

#ifndef RAYLIB_GAME_TEMPLATE_HOTBAR_H
#define RAYLIB_GAME_TEMPLATE_HOTBAR_H
#include "raylib.h"

struct HotbarSlot {
    bool is_occupied;
    int atomic_number;
};

class Hotbar {
public:
    void drawHotbar();

private:
    HotbarSlot slot[3] = { false };
};


#endif //RAYLIB_GAME_TEMPLATE_HOTBAR_H
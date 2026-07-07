//
// Created by harryskerritt on 07/07/2026.
//

#include "Hotbar.h"

void Hotbar::drawHotbar() {
    int slot_size = 80;
    int h_slot_size = slot_size / 2;
    int slot_gap = 20;
    int slot_count = 3;
    int background_x_extra = 20;
    int background_y_extra = 40;

    int hotbar_width = slot_count * (slot_size + slot_gap) - slot_gap;
    int screen_x = (GetScreenWidth() - hotbar_width) - background_x_extra;
    int screen_y = GetScreenHeight() - slot_size - 20;

    slot[0].is_occupied = true;
    slot[2].is_occupied = true;

    DrawRectangle(
        screen_x - (background_x_extra / 2),
        screen_y - (background_y_extra * 0.75),
        hotbar_width + background_x_extra,
        slot_size + background_y_extra,
        RED);

    DrawText("Next Elements",
        screen_x - (background_x_extra / 2) + 5,
        screen_y - (background_y_extra * 0.75) + 5,20, RAYWHITE);

    for (int i = 0; i < slot_count; i++) {
        float local_x = screen_x + i * (slot_size + slot_gap);
        float local_y = screen_y;
        Rectangle slot_rect = {
            (float)(screen_x + i * (slot_size + slot_gap)),
            (float)screen_y,
            (float)slot_size,
            (float)slot_size
        };

        Color fill = (slot[i].is_occupied) ? LIGHTGRAY : DARKGRAY;
        DrawRectangleRec(slot_rect, fill);
        DrawRectangleLinesEx(slot_rect, 2, BLACK);

        if (slot[i].is_occupied) {
            DrawPoly({(float)screen_x + h_slot_size, (float)screen_y + h_slot_size}, 6, h_slot_size - 4, 0, WHITE);
            DrawPolyLinesEx({(float)screen_x + h_slot_size, (float)screen_y + h_slot_size}, 6, h_slot_size - 4, 0, 3.0f, BLACK);
        }
    }
}

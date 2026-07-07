//
// Created by Harry Skerritt on 06/07/2026.
//

#ifndef GAME_H
#define GAME_H
#include "../Grid/Grid.h"
#include "../UI/Hotbar/Hotbar.h"


class Game {
public:
    Game();
    void update();
    void draw();

    void drawUI();


private:
    Grid m_grid;
    Hotbar m_hotbar;

};



#endif //GAME_H

//
// Created by Harry Skerritt on 09/07/2026.
//

#ifndef GAMEWIN_H
#define GAMEWIN_H
#include "../Game/Game.h"
#include "../UI/Button/Button.h"

class GameWin {
public:
    GameWin();
    ~GameWin();

    void init(Game* game);
    void update();
    void draw();

    int getResultState() const { return result_state; }

private:
    int score = 0;

    Button *quit_button = nullptr;
    Button *restart_button = nullptr;

    int result_state = -1;
};



#endif //GAMEWIN_H

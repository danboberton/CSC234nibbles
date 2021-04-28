// nibGame Header
#pragma once
#include "nibAbstractView.h"
#include "nibCoord.h"
#include "nibSnake.h"
#include "nibBoard.h"

namespace nibbles{

class AbstractView;

class Game {

public:
     //Constructors
    Game ();
    Game (int ,int, AbstractView* );

    // Inits
    void boardInit();

    // Run
    void run();

    // Get Sets

    Board* getBoard();

private:
    
    int _speed;
    
    bool _collision;
    AbstractView* _view;
    Snake* _snake;
    int _points = 0;
    Board* _board;

    void snakeToBoard();
};

}


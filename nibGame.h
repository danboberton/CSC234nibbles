// nibGame Header
#pragma once
#include "nibAbstractView.h"
#include "nibCoord.h"
#include "nibSnake.h"

namespace nibbles{

class TextView;

class Game {

public:
     //Constructors
    Game ();
    Game (int ,int, TextView* );

    // Inits
    void boardInit();

    // Run
    void run();

    // Get Sets
    int getX();
    int getY();
    Coord** getBoard();
    Coord* getCoord(int, int);

private:
    int _boardX;
    int _boardY;
    int _speed;
    Coord** _board;
    bool _collision;
    TextView* _view;
    Snake* _snake;
    int _points = 0;
};

}


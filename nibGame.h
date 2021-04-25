// nibGame Header
#pragma once
#include "nibAbstractView.h"
#include "nibCoord.h"

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
    int getX();
    int getY();
    Coord** getBoard();

    private:
    int _boardX;
    int _boardY;
    int _speed;
    Coord** _board;

    AbstractView* _view;
};

}


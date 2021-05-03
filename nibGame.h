// nibGame Header
#pragma once
#include "nibAbstractView.h"
#include "nibCoord.h"
#include "nibSnake.h"
#include "nibBoard.h"
#include "nibFruit.h"

namespace nibbles{

class AbstractView;
class Board;

class Game {

public:
     //Constructors
    Game ();
    Game (int ,int, AbstractView* );

    // Inits
    void boardInit();

    // Run
    void run();
    void gameOver();

    // Get Sets
    int getX();
    int getY();
    Board* getBoard();
    Coord* getCoord(int, int);

private:
    double _speed = 1000;
    Board* _board;
    bool _collision;
    AbstractView* _view;
    Snake* _snake;
    int _points = 0;
    bool _gameOver = false;

    // Helper Functions
    void addItem(Item*);
};

}


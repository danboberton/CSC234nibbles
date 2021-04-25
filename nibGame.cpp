// nibGame Implementation

#include "nibGame.h"

using namespace nibbles;

// Constructors
nibbles::Game::Game(){};

nibbles::Game::Game(int boardX, int boardY, AbstractView* view){

    _boardX = boardX;
    _boardY = boardY;
    _view = view;

    // Build a new game
    boardInit();

    view->disp("Game Built");

    view->updateBoard(this);

}

void nibbles::Game::run(){



}

/* Populate the board with new coordinate points */
void nibbles::Game::boardInit(){
    Coord* curRow;

    _board = new Coord*[_boardX];

    // Board column init
    for (int y = 0; y < _boardY; y++) {
        _board[y] = new Coord[_boardY];

        // Board row init
        for (int x = 0; x < _boardX; x++) {
            _board[y][x] = *(new Coord(x, y));

        }

}


    

}

int Game::getX(){
    return _boardX;
}

int Game::getY(){
    return _boardY;
}

Coord** Game::getBoard(){
    return _board;
}


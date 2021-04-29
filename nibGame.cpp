// nibGame Implementation

#include "nibGame.h"

using namespace nibbles;

// Constructors
nibbles::Game::Game(){};

nibbles::Game::Game(int boardX, int boardY, AbstractView* view){

    _board = new Board(boardX, boardY);
    _view = view;
    // Coord* snakeStart = _board->getCoord(5, 5);

    // _snake = new Snake(snakeStart, "Snake1");

    view->disp("Game Built");

    view->viewBoard(_board);

}

void nibbles::Game::run(){

// Main run loop

}

Board* Game::getBoard(){
    return _board;
}


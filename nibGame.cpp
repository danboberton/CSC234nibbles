// nibGame Implementation

#include "nibGame.h"

using namespace nibbles;

// Constructors
nibbles::Game::Game(){};

/* Making a new game, set everything up */
nibbles::Game::Game(int boardX, int boardY, AbstractView* view){

    _board = new Board(boardX, boardY);
    _view = view;

    view->disp("Game Built");

    view->viewBoard(_board);

    // Make a snake and add it to the board;
    _snake = new Snake(_board->getCoord(5, 5), "Snake 1");
    _board->addItem(dynamic_cast<Item*>(_snake));

    view->disp("Snake Built");

    _board->updateBoard();

    view->viewBoard(_board);



}// Coord* snakeStart = _board->getCoord(5, 5);

    // _snake = new Snake(snakeStart, "Snake1");

void nibbles::Game::run(){

// Main run loop

}

Board* Game::getBoard(){
    return _board;
}


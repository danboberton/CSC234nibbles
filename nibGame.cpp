// nibGame Implementation

#include "nibGame.h"
#include <ctime>

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
    addItem(new Snake(_board->getCoord(5, 5), "Snake 1"));
    addItem(new Fruit(_board->getCoord(10, 10), "Fruit 1"));
    

    view->disp("Snake and Fruit Built");

    _board->updateBoard();

    view->viewBoard(_board);

    run();



}// Coord* snakeStart = _board->getCoord(5, 5);

    // _snake = new Snake(snakeStart, "Snake1");

void nibbles::Game::run(){


}

Board* Game::getBoard(){
    return _board;
}

// Helper Functions
void Game::addItem(Item* item){
    _board->addItem(item);
}

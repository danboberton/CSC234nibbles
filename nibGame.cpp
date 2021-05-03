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

// std::clock_t start;
// double duration;
// start = std::clock();
// int key;

// // Play until game is over
// while (!_gameOver){

//     // Run timer
//     while (duration < _speed) {

// /* 
// KEY_UP 72
// KEY_DOWN 80
// KEY_LEFT 75
// KEY_RIGHT 77
// */

//         // Await player input
//         while (key = getc() != NULL ){

//             switch (key){
//                 case: 72
//                     _view->disp("Up!");
//                     break;
//                 case: 80
//                     _view->disp("Down!");
//                     break;
//                 case: 75
//                     _view->disp("Left!");
//                     break;
//                 case: 77
//                     _view->disp("Right!");
//                     break;
//             }

//         }

//         duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
//     }

// }

}

Board* Game::getBoard(){
    return _board;
}

// Helper Functions
void Game::addItem(Item* item){
    _board->addItem(item);
}

// nibGame Implementation


#include "nibGame.h"
#include <ctime>
#include <Windows.h>


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
    addItem(_snake);
    addItem(new Fruit(_board->getCoord(10, 10), "Fruit 1"));
    

    view->disp("Snake and Fruit Built");

    _board->updateBoard();

    view->viewBoard(_board);

    run();



}

void nibbles::Game::run(){

    const int SLEEP_TIME = 1000;
    int testCounter = 0;
    // main game loop
    while (!_gameOver) {
        
        Sleep(SLEEP_TIME);
        system("cls");  // Clear screen

        printf("Draw #%d\n", testCounter);
        _view->viewBoard(_board);

        _snake->moveSnake(right);
        _board->updateBoard();

        testCounter++;

    }

}

Board* Game::getBoard(){
    return _board;
}

// Helper Functions
void Game::addItem(Item* item){
    _board->addItem(item);
}

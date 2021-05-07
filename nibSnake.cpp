// Snake Implementation

#include "nibSnake.h"
#include <vector>

using namespace nibbles;


Snake::Snake(){

}

// TODO snake needs to have Coords
Snake::Snake(Coord* startCoord, std::string name){
    _length = INIT_LENGTH;
    _name = name;
    _snakeHead = startCoord;
    _dir = right;
    _type = snake;
    _char = '@';
    _coords = new Coord[SNAKE_ARR_SIZE];
    _size = 1;

}

// TODO fix
void Snake::moveSnake(absDir direction){
    
    Coord* newHead = getNewPos(direction);
    _snakeHead = newHead;

    _coords[_length] = *newHead;
    // cleanTail();

}

// TODO implement
void snakeEat(int number){

}

// TODO implement
void Snake::setHead(Coord* head){

}

// get new coordinate in the position the snake is moving
Coord* Snake::getNewPos(absDir direction) {

    Coord* result = NULL;
    int curX = _snakeHead->_x;
    int curY = _snakeHead->_y;
    int newX;
    int newY;

    switch (direction) {
    case up:
        newY = --curY;
        break;
    case right:
        newX = ++curX;
        break;
    case down:
        newY = ++curY;
        break;
    case left:
        newX = --curX;
        break;
    } // end switch

    return new Coord(curX, curY, this);
}

/* Delete old coords that are beyond length*/
void Snake::cleanTail() {

    for (int i = 0; i < SNAKE_ARR_SIZE; i++) {

        // if beyond length clear out
        if (!((i + 1) < _length)) {
            
        }
    }

}

void Snake::insertCoord(Coord* newCoord) {

    // Bump all array items down
    for (int i = _length; i > 0; i--) {
        _coords[i] = _coords[i - 1];
    }

    _coords[0] = *newCoord;
}


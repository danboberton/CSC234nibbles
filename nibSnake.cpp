// Snake Implementation

#include "nibSnake.h"
#include <vector>

using namespace nibbles;


Snake::Snake(){

}

// TODO snake needs to have Coords
Snake::Snake(Coord* startCoord, std::string name){
    _size = INIT_LENGTH;
    _name = name;
    _dir = right;
    _type = snake;
    _char = '@';
    _coords = new Coord(*startCoord);

}

// TODO fix
void Snake::moveSnake(absDir direction){
    
    Coord* newHead = getNewPos(direction);

    this->insertCoord(newHead);
    cleanTail();

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
    int curX = _coords->_x;
    int curY = _coords->_y;
    int newX = curX;
    int newY = curY;

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

    return new Coord(newX, newY, this);
}

/* Delete old coords that are beyond length*/
void Snake::cleanTail() {

    Coord* curCoord = _coords;
    Coord* buffer = NULL;

    // Find end of valid coords based on _size
    for (int i = 1; i < _size; i++) {

        curCoord = curCoord->nextCoord();

    }

    // Set the next link as NULL after valid coords
    buffer = curCoord;
    curCoord = curCoord->nextCoord();
    buffer->setNext(nullptr);
    while (curCoord != NULL) {

        buffer = curCoord->nextCoord();
        delete curCoord;

        curCoord = buffer;
    }


}

void Snake::insertCoord(Coord* newCoord) {

    newCoord->setNext(_coords);
    _coords->setContain(SNAKE_TAIL);
    _coords = newCoord;

}


// Snake Implementation

#include "nibSnake.h"

using namespace nibbles;


Snake::Snake(){

}

Snake::Snake(Coord* startCoord, std::string name){
    _length = INIT_LENGTH;
    _name = name;
    _snakeHead = startCoord;
    _dir = right;
}

bool Snake::moveSnake(absDir direction){
    return true;
}

// TODO implement
void snakeEat(int number){

}

// TODO implement
void Snake::setHead(Coord* head){

}

/* Returns all active snake coordinates */
Coord* Snake::getSnake(){

    Coord* retArr[_length];

    // Added to appease compiler for a second
    retArr[0] = new Coord;
    Coord* curCoord = _snakeTail;

    for (int i = 0; i < _length; i++){
        retArr[i] = curCoord;
        curCoord ++;
    }

    return new Coord();

}
// Snake Implementation

#include "nibSnake.h"

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
    _coords = new Coord[100];   // This will need to be updated for variable size 
    _coords[0] = *(startCoord);
    _size = 1;

}

// TODO fix
bool Snake::moveSnake(absDir direction){
    return true;
}

// TODO implement
void snakeEat(int number){

}

// TODO implement
void Snake::setHead(Coord* head){

}


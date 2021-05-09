// Coord Implementation

#include "nibCoord.h"

using namespace nibbles;;

// Constructros
Coord::Coord(){}
Coord::Coord(int x, int y){
    _x = x;
    _y = y;

}
Coord::Coord(int x, int y, Item* item){
    _x = x;
    _y = y;
    _item = item;
}
Coord::~Coord(){

    _contains = NULL;
    _item = nullptr;
    _nextCoord = nullptr;
    _x = NULL;
    _y = NULL;
    free = NULL;

}
Coord::Coord(const Coord& copy) {
    _x = copy._x;
    _y = copy._y;
}
bool Coord::setContain(char item){

    _contains = item;
    return true;
}

Item* Coord::getItem(){
    return _item;
}

bool Coord::setItem(Item* item){
    _item = item;
    return true;
}

int Coord::getX() {
    return this->_x;
}

int Coord::getY() {
    return this->_y;
}

Coord* Coord::nextCoord() {

    return _nextCoord;
}

void Coord::setNext(Coord* next) {

    _nextCoord = next;

}
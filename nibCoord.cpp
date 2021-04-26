// Coord Implementation

#include "nibCoord.h"

using namespace nibbles;;

// Constructros
Coord::Coord(){}
Coord::Coord(int x, int y){
    _x = x;
    _y = y;
}

bool Coord::setContain(char item){

    _contains = item;
    return true;
}

Item* Coord::getItem(){
    return _item;
}
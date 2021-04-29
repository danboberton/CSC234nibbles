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
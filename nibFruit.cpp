// Fruit Implementation

#include "nibFruit.h"

using namespace nibbles;

Fruit::Fruit(Coord* startCoord, std::string name){
    _name = name;
    _type = fruit;
    _char = '1';
    _coords = startCoord;   // This will need to be updated for variable size 
    _size = 1;

}
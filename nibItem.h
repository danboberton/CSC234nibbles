// Board Item Header
/* Superclass Interface for items placed on the board
*/
#pragma once
#include "nibCoord.h"
#include <string>

namespace nibbles{

class Coord;

class Item{

public:
    virtual void collision() = 0;

    // Constructors
    Item();

protected:
    Coord* _coords;
    std::string _name;
    char _char;
    int _size;

}; // end class

}// end namespace
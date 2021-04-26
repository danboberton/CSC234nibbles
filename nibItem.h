// Board Item Header
/* Superclass Interface for items placed on the board 
*/
#pragma once
#include "nibCoord.h"
#include <string>

namespace nibbles{

class Item{

public:
    virtual void collision() = 0;


private:
    Coord* _coords;
    std::string _name;
    char _char;
    int _size

};

}// end namespace

// Board Item Header
/* Superclass Interface for items placed on the board 
*/
#pragma once
#include "nibCoord.h"
#include <string>

namespace nibbles{

// Forward declaration
class Coord;

class Item{

public:
    // Statics
    // static int _numItems;
    // Access Items from static class?
    // static Item* _items;
    // static int numGameItems();


    // Constructors
    Item();

    // Virtual Interface Functions
    virtual void collision() = 0;

protected:
    Coord* _coords;
    std::string _name;
    char _char;
    int _size;

};

}// end namespace

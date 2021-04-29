// Coord header
#pragma once
#include "nibItem.h"

namespace nibbles{

class Item;

class Coord{

public:
    bool free = true;

    // Constructors
    Coord();
    Coord(int, int);

    // Inits
    bool setContain(char);

    // Get Set
    Item* getItem();

private:
    char _contains;
    int _x;
    int _y;
    Item* _item;
};

} // end namespace
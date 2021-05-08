// Coord header
#pragma once
#include "nibItem.h"

namespace nibbles{

class Item;

class Coord{

public:
    int _x;
    int _y;
    bool free = true;

    // Constructors
    Coord();
    Coord(int, int);
    Coord(int, int, Item*);

    // Inits
    bool setContain(char);

    // Get Set
    Item* getItem();
    bool setItem(Item*);
    int getX();
    int getY();

private:
    char _contains;
    Item* _item;
};

} // end namespace
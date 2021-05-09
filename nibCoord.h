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
    ~Coord();
    Coord(const Coord& copy);

    // Inits
    bool setContain(char);

    // Get Set
    Item* getItem();
    bool setItem(Item*);
    int getX();
    int getY();
    Coord* nextCoord();
    void setNext(Coord*);

private:
    char _contains;
    Item* _item;
    Coord* _nextCoord = nullptr;
};

} // end namespace
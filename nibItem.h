// Board Item Header
/* Superclass Interface for items placed on the board 
*/
#pragma once
#include "nibCoord.h"
#include <string>

namespace nibbles{

enum itemType{
    empty,
    snake,
    fruit,
    obsticle
};

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

    // Destructor
    virtual ~Item();

    // Virtual Interface Functions
    virtual void collision();           // What do do if collision with an item
    virtual Coord* getPosition();       // Array of Coords to return when board updates
    virtual itemType getType();
    virtual char getChar();
    virtual int getSize();

protected:
    Coord* _coords; // root of linked list
    std::string _name;
    char _char;
    itemType _type;
    int _size;

};

}// end namespace

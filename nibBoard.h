// Board Header
#pragma once
#include "nibCoord.h"
#include "nibItem.h"
#include "nibTextView.h"
#include <string>

namespace  nibbles{

class Board{

public:
    static int _sizeX;
    static int _sizeY;

    // Constructors
    Board();
    Board(int, int);

    // Destructor
    ~Board();

    // Get Set
    Coord** getBoard();

    friend class TextView;

private:
    
    Coord** _board;
    Item* _items;

    void boardInit(int, int);

    /* Load a level with config from file */
    bool initFromConfig(std::string);

};
} // end namespace
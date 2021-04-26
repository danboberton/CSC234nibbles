// Board Header
#pragma once
#include "nibCoord.h"
#include "nibItem.h"
#include "nibTextView.h"

namespace  nibbles{

class Board{

public:
    static int _sizeX;
    static int _sizeY;
    Coord** _board;

    // Constructors
    Board();
    Board(int, int);

    

    // Destructor
    ~Board();

    // Get Set
    Coord** getBoard();

private:
    
    
    Item* _items;

    void boardInit(int, int);

}
} // end namespace
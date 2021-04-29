// Board Header
#pragma once
#include "nibCoord.h"
#include "nibItem.h"
#include "nibTextView.h"


namespace nibbles{

class Board{

public:

    // Constructors
    Board();
    Board(int, int);


    // Destructor
    ~Board();

    // Get Set
    Coord** getBoard();
    Coord* getCoord(int, int);
    friend class TextView;

private:
    
    Coord** _board;
    int _sizeX;
    int _sizeY;
    Item* _items;
    void boardInit();

};
} // end namespace
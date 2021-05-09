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

    // Game Functions
    void updateBoard();
    bool addItem(Item*);

private:

    // Config
    const int MAX_ITEMS = 10;
    
    Coord** _coords;
    int _sizeX;
    int _sizeY;
    Item** _items; // Array of item pointers
    int _numItems;
    void boardInit();

    

};
} // end namespace
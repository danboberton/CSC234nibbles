// Board Implementation

#include "nibBoard.h"

using namespace nibbles;

//Constructors
Board::Board(){}

Board::Board(int x, int y){
    _sizeX = x;
    _sizeY = y;
    
    _items = new Item[MAX_ITEMS];

    boardInit();
}

// TODO check destructor
Board::~Board(){}

// Get Set
Coord** Board::getBoard(){
    return _coords;
}

Coord* Board::getCoord(int x, int y){

    return &_coords[y][x];

}
    


/* Populate the board with initial coordinate points */
void Board::boardInit(){
    Coord* curRow;

    _coords = new Coord*[_sizeX];

    // Board column init
    for (int y = 0; y < _sizeY; y++) {
        _coords[y] = new Coord[_sizeY];

        // Board row init
        for (int x = 0; x < _sizeX; x++) {
            // Default items are empty
            _coords[y][x] = *(new Coord(x, y, (new Item())));

        }

    }

}

/* updates the board AND checks for collisions **/

void Board::updateBoard(){

    Item* curItem = _items;
    Coord* itemCoords;
    Coord   curCoord;
    Coord   boardCoord;

    // Cycle through each item and get item positions
    while(curItem != NULL){
        itemCoords = curItem->getPosition();

        // Cycle through each coord of 
        while(itemCoords != NULL){
            
            // Get board coordinate, where the item is
            boardCoord = _coords[curCoord._y][curCoord._x];
            
            // If the board coordinate isn't empty there is a collision
            if (boardCoord.getItem()->getType() != empty){

                // Execute Collision
                boardCoord.getItem()->collision();
                // Maybe still set the item
            } else {
                // The space is empty, set item.

                boardCoord.setItem(curItem);

            }







            itemCoords++;
        }

        curItem++;
    }

}

bool Board::addItem(Item* item){

_items[_numItems] = *(item);
_numItems++;

return true;

}
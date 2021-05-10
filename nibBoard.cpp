// Board Implementation

#include "nibBoard.h"

using namespace nibbles;

//Constructors
Board::Board(){}

Board::Board(int x, int y){
    _sizeX = x;
    _sizeY = y;
    
    _items = new Item*[MAX_ITEMS];

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
    Coord* curRow = nullptr;

    _coords = new Coord*[_sizeX];

    // Board column init
    for (int y = 0; y < _sizeY; y++) {
        _coords[y] = new Coord[_sizeY];

        // Board row init
        for (int x = 0; x < _sizeX; x++) {
            // Default items are empty
            _coords[y][x] = *(new Coord(x, y, emptyItem));

        }

    }

}

/* updates the board AND checks for collisions **/

void Board::updateBoard(){

    Item* curItem;
    Coord* itemCoords;
    Coord* boardCoord;

    // Cycle through each item and get item positions
    for (int i = 0; i < _numItems; i++){
        curItem = _items[i];
        itemCoords = curItem->getPosition();

        // Cycle through each coord returned from item's getPosition()
        while (itemCoords != NULL) {
        // for (int c = 0; c < curItem->getSize(); c++){
            
            // Get board coordinate, where the item is
            boardCoord = getCoord(itemCoords->_x, itemCoords->_y);
            
            // If the board coordinate isn't empty there is a collision
            if (boardCoord->getItem()->getType() != empty){

                // Execute Collision
                boardCoord->getItem()->collision();
                // Maybe still set the item
            } else {
                // The space is empty, set item.

                boardCoord->setItem(curItem);

            }

            itemCoords = itemCoords->nextCoord();
        }

        if (curItem->getType() == snake) {
            updateItem(curItem);
        }

    }

}

bool Board::addItem(Item* item){

_items[_numItems] = item;
_numItems++;

return true;

}

void Board::clearItem(Item* item) {
    
}

void Board::clearCoord(Coord* coord) {

}

/* Find any coords referencing this item and reset them if they're not current*/
void Board::updateItem(Item* item) {

    Coord* curCoord;
    Coord* itemCoord;
    bool goodCoord = false;
    

    // Iterate rows
    for (int y = 0; y < _sizeY; y++) {

        // Iterate columns
        for (int x = 0; x < _sizeX; x++) {
            
            curCoord = &_coords[y][x];

            // Found the item?
            if (curCoord->getItem() == item) {

                itemCoord = item->getPosition();

                // Check all coords in item
                while (itemCoord != NULL && goodCoord != true) {

                    // Match?
                    if (itemCoord->getX() == curCoord->getX() && itemCoord->getY() == curCoord->getY()) {
                        goodCoord = true;
                    }

                    itemCoord = itemCoord->nextCoord();
                }

                if (goodCoord == false) {
                    curCoord->setItem(emptyItem);
                    curCoord->setContain(' ');
                }
            } // end found item

        } // end column iterate

    } // end row iterate

}
// Board Implementation

#include "nibBoard.h"

using namespace nibbles;

//Constructors
Board::Board(){}

Board::Board(int x, int y){
    _sizeX = x;
    _sizeY = y;
    boardInit();
}

// TODO check destructor
Board::~Board(){}

// Get Set
Coord** Board::getBoard(){
    return _board;
}

/* Populate the board with new coordinate points */
void Board::boardInit(){
    Coord* curRow;

    _board = new Coord*[_sizeX];

    // Board column init
    for (int y = 0; y < _sizeY; y++) {
        _board[y] = new Coord[_sizeY];

        // Board row init
        for (int x = 0; x < _sizeX; x++) {
            _board[y][x] = *(new Coord(x, y));

        }

    }

}


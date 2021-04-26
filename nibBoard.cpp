// Board Implementation

#include "nibBoard.h"

using namespace nibbles;

//Constructors
Board::Board(){}

Board::Board(int x, int y){
    _sizeX = x;
    _sizeY = y;
}

// TODO check destructor
Board::~Board(){}

const Coord** Board::getBoard(){
    return _board;
}


/* Populate the board with new coordinate points */
void Board::boardInit(int _x, int _y){
    Coord* curRow;

    _board = new Coord*[_x];

    // Board column init
    for (int y = 0; y < _y; y++) {
        _board[y] = new Coord[_y];

        // Board row init
        for (int x = 0; x < _x; x++) {
            _board[y][x] = *(new Coord(x, y));

        }

}
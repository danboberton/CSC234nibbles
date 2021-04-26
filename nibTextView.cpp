// Text View Implementation
#include "nibTextView.h"
#include <string>

using namespace nibbles;

TextView::TextView(){}

// TODO fix changes
void TextView::viewBoard(const Board* &board){
    std::string buffer;
    Coord** curBoard = board->getBoard();

    // Top Horizontal wall
    buffer.append(getHLine(board->_sizeX));

    for (int y = 0; y < board->_sizeX; y++){

        // Add initial vertical wall
        buffer.push_back(VWALL);

        // Add current coord state
        for (int x = 0; x < board->_sizeY; x++){
            if (curBoard[y][x].free) {
                buffer.push_back(EMPTY);
            }
        }

        // Add right wall and line return
        buffer.push_back(VWALL);
        buffer.append("\n");
    }

    // Bottom Horizontal Wall
    buffer.append(getHLine(board->_sizeX);

    printf("%s", buffer.c_str());
}

void TextView::disp(std::string message){
    printf("\n*--  %s  --*\n", message.c_str());
}

/* Returns a string for horizontal Wall */
std::string TextView::getHLine(int size){

    std::string buffer;

    for (int i = 0; i < (size + 2); i++){
        buffer.push_back(HWALL);
    }

    buffer.append("\n");

    return buffer;


}
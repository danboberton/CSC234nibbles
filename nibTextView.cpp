// Text View Implementation
#define NOMINMAX
#define WIN32_LEAN_AND_MEAN

#include "nibTextView.h"
#include <string>
#include "nibBoard.h"
#include <Windows.h>
#include <iostream>


using namespace nibbles;

TextView::TextView(){

}

void TextView::viewBoard(Board* const board){
    std::string buffer;
    Coord** curBoard = board->getBoard();
    Item* curItem;

    // Top Horizontal wall
    buffer.append(getHLine(board->_sizeX));

    for (int y = 0; y < board->_sizeY; y++){

        // Add initial vertical wall
        buffer.push_back(VWALL);

        // Add current coord state
        for (int x = 0; x < board->_sizeX; x++){
            curItem = curBoard[y][x].getItem();
            buffer.push_back(curItem->getChar());
            
        }

        // Add right wall and line return
        buffer.push_back(VWALL);
        buffer.append("\n");
    }

    // Bottom Horizontal Wall
    buffer.append(getHLine(board->_sizeX));

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

void TextView::cls()
{
    // Get the Win32 handle representing standard output.
    // This generally only has to be done once, so we make it static.
    static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_SCREEN_BUFFER_INFO csbi;
    COORD topLeft = { 0, 0 };

    // std::cout uses a buffer to batch writes to the underlying console.
    // We need to flush that to the console because we're circumventing
    // std::cout entirely; after we clear the console, we don't want
    // stale buffered text to randomly be written out.
    std::cout.flush();

    // Figure out the current width and height of the console window
    if (!GetConsoleScreenBufferInfo(hOut, &csbi)) {
        // TODO: Handle failure!
        abort();
    }
    DWORD length = csbi.dwSize.X * csbi.dwSize.Y;

    DWORD written;

    // Flood-fill the console with spaces to clear it
    FillConsoleOutputCharacter(hOut, TEXT(' '), length, topLeft, &written);

    // Reset the attributes of every character to the default.
    // This clears all background colour formatting, if any.
    FillConsoleOutputAttribute(hOut, csbi.wAttributes, length, topLeft, &written);

    // Move the cursor back to the top left for the next sequence of writes
    SetConsoleCursorPosition(hOut, topLeft);
}

void TextView::setCursorPosition(int x, int y)
{
    static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    std::cout.flush();
    COORD coord = { (SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(hOut, coord);
}
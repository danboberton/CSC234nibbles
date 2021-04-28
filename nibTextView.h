// Text View Header
// Class for text output view in a MVC design pattern

#pragma once
#include "nibAbstractView.h"
#include "nibBoard.h"

namespace nibbles{

class Board;
class AbstractView;

class TextView
{

public:
    // Constructors
    TextView();

    void viewBoard(Board*);
    void disp(std::string);

private:

    // Board Config
    const char HWALL = '#';
    const char VWALL = '#';
    const char EMPTY = ' ';
    const char SNAKE_HEAD = '@';
    const char SNAKE_TAIL = '+';

    std::string getHLine(int);

};

}
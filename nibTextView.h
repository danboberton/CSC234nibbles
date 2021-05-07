// Text View Header
// Class for text output view in a MVC design pattern

#pragma once
#include "nibAbstractView.h"


namespace nibbles{

// Forward declaration
class Board;

class TextView : public AbstractView
{

public:
    // Constructors
    TextView();

    virtual void viewBoard(Board* const);
    virtual void disp(std::string);

private:

    // Board Config
    const char HWALL = '#';
    const char VWALL = '#';
    const char EMPTY = ' ';
    const char SNAKE_HEAD = '@';
    const char SNAKE_TAIL = '+';

    std::string getHLine(int);

    void cls();
    void setCursorPosition(int, int);

};

}
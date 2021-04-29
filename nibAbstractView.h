// AbstractView Header
// Meant as an interface for possible GUI implementation down the road;
#pragma once
#include <string>

namespace nibbles {

// Forward declaration
class Board;

class AbstractView {

public:

    // Constructor
    AbstractView();

    virtual void viewBoard(Board* const) = 0;
    virtual void disp(std::string) = 0;

};

} // end namespace

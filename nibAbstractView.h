// AbstractView Header
// Meant as an interface for possible GUI implementation down the road;
#pragma once
#include <string>
#include "nibGame.h"

namespace nibbles {

// Forward declaration
class Game;

class AbstractView {

public:
    virtual void updateBoard(Game*) = 0;
    virtual void disp(std::string) = 0;

private:
};

} // end namespace

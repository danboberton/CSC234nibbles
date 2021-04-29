// Snake Header
#pragma once
#include <string>
#include "nibCoord.h"
#include "nibItem.h"

namespace nibbles{

enum absDir{
    up,
    right,
    down,
    left
};

class Snake : public Item {

public:
    // Constructors
    Snake();
    Snake(Coord*, std::string);

    // Game
    bool moveSnake(absDir);
    void snakeEat(int);

    void collision(){};

    // Get Sets
    void setHead(Coord*);
    

private:
    int _length;
    Coord* _snakeHead;
    absDir _dir;

    void cleanTail();

    // Config
    const int INIT_LENGTH = 1;


};
}
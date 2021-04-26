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

class Snake : Item {

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
    Coord* getSnake();
    

private:
    const int INIT_LENGTH = 1;
    Coord* _snakeHead;
    Coord _snakeTail[400];
    absDir _dir;

    void cleanTail();


};
}
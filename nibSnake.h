// Snake Header
#pragma once
#include <string>
#include "nibCoord.h"
#include "nibItem.h"
#include <vector>

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
    void moveSnake(absDir);
    void snakeEat(int);

    void collision(){};

    // Get Sets
    void setHead(Coord*);


    

private:
    const char SNAKE_HEAD = '@';
    const char SNAKE_TAIL = '*';
    absDir _dir;
    const int SNAKE_ARR_SIZE = 200;

    void insertCoord(Coord*);
    void cleanTail();
    Coord* getNewPos(absDir);

    // Config
    const int INIT_LENGTH = 1;


};
}
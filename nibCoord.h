// Coord header
#pragma once

namespace nibbles{

class Coord{

public:
    bool free = true;

    // Constructors
    Coord();
    Coord(int, int);

    // Inits
    bool setContain(char);

private:
    char _contains;
    int _x;
    int _y;
    
};

} // end namespace
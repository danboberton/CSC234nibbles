// Item Implementation

#include "nibItem.h"

using namespace nibbles;

// Constructors
/* Default 'Items' are empty spaces */
Item::Item(){

_type = empty;
_char = ' ';


}

// Destructors
Item::~Item(){}

// int Item::numGameItems(){
//     return Item::_numItems;
// }

itemType Item::getType(){
    return _type;
}

/* What happens when something collides with this object */
void Item::collision(){

}

Coord* Item::getPosition(){
    return _coords;
}

char Item::getChar(){
    return _char;
}
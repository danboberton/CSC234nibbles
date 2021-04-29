#include "Nibbles.h"
#include <iostream>
#include "nibTextView.h"
using namespace CSC234;

typedef nibbles::TextView TextView;
typedef nibbles::AbstractView AbsView;

namespace CSC234 {

    // Constructors
    Nibbles::Nibbles() {
        TextView* textView = new nibbles::TextView();
        _view = dynamic_cast<AbsView*>(textView);
    }

    // Destructor
    Nibbles::~Nibbles(){}

    Nibbles* Nibbles::makeGame() {
            return new Nibbles();
    }

    void Nibbles::start(){
        _view->disp("Welcome to NIBBLES!");

        _game = new nibbles::Game(20, 20, _view);
        _game->run();

    }

 };
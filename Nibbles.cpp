#include "Nibbles.h"
#include <iostream>
#include "nibTextView.h"
using namespace CSC234;

namespace CSC234 {

    // Constructors
    Nibbles::Nibbles() {
        _view = new nibbles::TextView();
    };

    // Destructor
    Nibbles::~Nibbles(){}

    Nibbles* Nibbles::makeGame() {
            return new Nibbles();
    }

    void Nibbles::init() {
        // TODO build init
    };

    void Nibbles::start(){
        _view->disp("Welcome to NIBBLES!");

        _game = new nibbles::Game(20, 20, _view);
        _game->run();

    }

 };
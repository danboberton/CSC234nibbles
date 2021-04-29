#pragma once

#include "Casino.h"
#include "nibGame.h"
#include "nibAbstractView.h"

namespace CSC234 {

    class Nibbles : public Casino {

    public:
        // Constructors
        Nibbles();

        // Destructor
        ~Nibbles();

        // Init
        static Nibbles* makeGame();

        void start();


    private:

        nibbles::Game* _game;
        nibbles::AbstractView* _view;

    };

};// end namespace

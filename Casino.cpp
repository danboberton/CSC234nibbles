#include <iostream>
#include <string>
#include "Casino.h"
// #include "Battleship.h"
// #include "TicTacToeGame.h"
// #include "Yahtzee.h"
// #include "ColoradoTrail.h"
// #include "CardsAgainstHumanity.h"
#include "Nibbles.h" // Dan


namespace CSC234 {
	//class Casino implementation file
	void Casino::play(string gameName) {
		Casino* game = NULL;   //pointer can refer to object of subclass

		// if (gameName == "TicTacToeGame")
		// 	game = TicTacToeGame::makeGame();

		// if (gameName == "Yatzee")
		// 	game = Yahtzee::makeGame();

		// if (gameName == "The Colorado Trail")
		// 	game = ColoradoTrail::makeGame();

		// if (gameName == "Cards Against Humanity")
		// 	game = CardsAgainstHumanity::makeGame();

		// if (gameName == "Space Trader")
		// 	game = SpaceTrader::makeGame();

		// if (gameName == "Nibbles")
		// 	game = Nibbles::makeGame();

		// if (gameName == "Battleship")
		// 	game = Battleship::makeGame();

		if (gameName == "Nibbles")
			game = Nibbles::makeGame();

		game->start();  // using late binding, invoke game start
		delete game;	// cleaning up heap

	}

	void Casino::start() {
		std::cout << "Subclass funtion start() is not defined." << endl;
	}

	Casino::~Casino() {
		std::cout << "Casino desctructor here" << endl;
	}
}
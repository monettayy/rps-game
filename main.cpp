//Monette Fornaleza

//Driver

#include <iostream>

#include "Game.h"

using namespace std;

int main()
{
    cout << "-------------------------------" << endl;
    cout << "CLASSIC ROCK PAPER SCISSORS GAME" << endl;
    cout << "-------------------------------" << endl << endl;
    cout << "Game initializes "<< endl;
    cout << "-------------------------------" << endl;
    Game game (2, 2);
    game.printPlayers();
    cout << "Game starts "<< endl;
    cout << "-------------------------------" << endl;
    game.play();
    cout << "Game ends "<< endl;
    cout << "-------------------------------" << endl;
    //result
    game.printScore();
    game.printWinner();
    cout << "-------------------------------" << endl;
    return 0;
}

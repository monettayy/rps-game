#include "HumanPlayer.h"

int HumanPlayer::ctr = 0;

HumanPlayer::HumanPlayer()
{
    isHuman = true;

    if(ctr%2==0)
        cout << "Enter name of human player: ";
    else
        cout << "Enter name of 2nd human player: ";

    getline(cin, name);
    ctr++;
}

HumanPlayer::~HumanPlayer()
{
    //dtor
}

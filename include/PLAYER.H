#ifndef PLAYER_H
#define PLAYER_H

#include "HAND.H"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"

class Player
{
    public:
        Player();

        string getName();
        bool getIsHuman();
        Hand getHand();

        void setHand();

        Outcome versus(Player&);

        virtual ~Player();

    protected:
        string name;
        bool isHuman;
        Hand hand;

    private:
};

#endif // PLAYER_H

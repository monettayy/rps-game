#ifndef GAME_H
#define GAME_H

#include "PLAYER.H"
#include "HumanPlayer.h"
#include "AIPLAYER.H"

class Game
{
    public:
        Game();
        Game(int, int);

        void play();
        void printPlayers();
        void printScore();
        void printWinner();

        virtual ~Game();

    protected:

    private:
        Player player1;
        Player player2;
        int noRounds;
        int p1Score;
        int p2Score;
        static int roundNo;
        int mode;
};

#endif // GAME_H

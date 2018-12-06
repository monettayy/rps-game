#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H

#include "Player.h"

class HumanPlayer: public Player
{
    public:
        HumanPlayer();
        virtual ~HumanPlayer();

    protected:

    private:
        static int ctr;
};

#endif // HUMANPLAYER_H

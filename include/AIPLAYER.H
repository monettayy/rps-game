#ifndef AIPLAYER_H
#define AIPLAYER_H

#include "Player.h"

class AIPlayer: public Player
{
    public:
        AIPlayer();
        virtual ~AIPlayer();

    protected:

    private:
        static int ctr;
};

#endif // AIPLAYER_H

#include "AIPlayer.h"

int AIPlayer::ctr = 0;

AIPlayer::AIPlayer()
{
    isHuman = false;

    name = ctr%2==0 ? "AI-1" : "AI-2";
    ctr++;
}

AIPlayer::~AIPlayer()
{
    //dtor
}

#include "Hand.h"

Hand::Hand()
{
    //ctor
}

char Hand::getType()
{
    return type;
}

string Hand::getName()
{
    return name;
}

Outcome Hand::compare(Hand& hand)
{
    if(type == hand.type)
        return DRAW;
    else
    {
        int indctr = type-hand.type;
        if(indctr == -1 || indctr == -2 || indctr == 3)
            return WIN;
        else
            return LOSE;
    }
}

Hand::~Hand()
{
    //dtor
}

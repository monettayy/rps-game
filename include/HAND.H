#ifndef HAND_H
#define HAND_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;

enum Outcome { WIN, LOSE, DRAW};

class Hand
{
    public:
        Hand();
        char getType();
        string getName();
        Outcome compare(Hand& hand);
        virtual ~Hand();
    protected:
        char type;
        string name;
    private:
};

#endif // HAND_H

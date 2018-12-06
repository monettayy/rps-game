#include "Player.h"

Player::Player()
{
    srand(time(NULL));
}

string Player::getName()
{
    return name;
}

bool Player::getIsHuman()
{
    return isHuman;
}

Hand Player::getHand()
{
    return hand;
}

void Player::setHand()
{
    Hand hand;
    Rock rock;
    Paper paper;
    Scissors scissors;

    char input;
    if(isHuman)
    {
        cout << getName() <<
                ", is it Rock[R], Paper[P] or Scissors[S]? ";
        cin >> input;
    }
    else
    {
        char ranArr[3] = {'r', 'p', 's'};

        int index = rand()%3;
        input = ranArr[index];
    }

    switch(input)
    {
        case 'r': case 'R':
            hand = rock; break;
        case 'p': case 'P':
            hand = paper; break;
        case 's': case 'S':
            hand = scissors; break;
    }

    this->hand = hand;
}

Outcome Player::versus(Player& otherPlayer)
{
    Outcome result = hand.compare(otherPlayer.hand);
    return result;
}

Player::~Player()
{
    //dtor
}

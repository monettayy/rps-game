#include "Game.h"

int Game::roundNo = 1;

Game::Game()
{
    AIPlayer ai1;
    AIPlayer ai2;

    player1 = ai1;
    player2 = ai2;
    noRounds = 3;
    p1Score = 0;
    p2Score = 0;
    mode = 0;
}

Game::Game(int mode, int N)
{
    AIPlayer ai;

    switch(mode)
    {
        case 1:
        {
            HumanPlayer h;
            player1 = h;
            player2 = ai;
            break;
        }
        case 2:
        {
            HumanPlayer h1;
            player1 = h1;
            HumanPlayer h2;
            player2 = h2;
            break;
        }
        default:
            player1 = ai;
            AIPlayer ai2;
            player2 = ai2;
    };

    noRounds = N;
    p1Score = 0;
    p2Score = 0;
    this->mode = mode;
}

void Game::play()
{
    for(int i=0; i<noRounds; i++)
    {
        cout << "Round " << i+1 << endl;

        player1.setHand();
        cout << "\t" << player1.getName() <<
                " picks " << player1.getHand().getName() << endl;

        player2.setHand();
        cout << "\t" << player2.getName() <<
                " picks " << player2.getHand().getName() << endl;

        cout << endl;
        Outcome result = player1.versus(player2);
        if(result == DRAW)
            continue;
        else
            if(result == WIN)
                p1Score++;
            else
                p2Score++;
    }
}

void Game::printPlayers()
{
    cout << "PLAYERS: " << player1.getName() <<
            " vs. " << player2.getName() << endl;
}

void Game::printScore()
{
    cout << "SCORE: " << p1Score <<
            " - " << p2Score << endl;
}

void Game::printWinner()
{
    cout << "WINNER: ";
    if(p1Score == p2Score)
        cout << "Its a draw.";
    else if(p1Score > p2Score)
        cout << player1.getName();
    else
        cout << player2.getName();
    cout << endl;
}

Game::~Game()
{
    //dtor
}

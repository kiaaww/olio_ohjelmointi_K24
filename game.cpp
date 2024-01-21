#include <iostream>
#include "game.h"
using namespace std;
Game::Game(int gameObject)
{
    maxNumber=gameObject;
    cout<<"GAME CONSTRUCTOR: object initialized with "<<maxNumber<<" as a maximum value"<<endl;
    srand(time(0));
    randomNumber=rand()%maxNumber +1;
}
Game::~Game()
{
    cout<<"GAME DESTRUCTOR: object cleared from stack memory"<<endl;
}
void Game::printGameResult()
{
    cout<<"You guessed the right answer: "<<randomNumber;
    cout<<" with "<<numOfGuesses<<" guesses"<<endl;
}
void Game::play()
{

    while(playerGuess!=randomNumber){
        cout<<"Give your guess between 1-"<<maxNumber<<endl;
        cin>>playerGuess;

        if(playerGuess==randomNumber){
            cout<<"Your guess is correct"<<endl;
        }
        else if(playerGuess>randomNumber){
            cout<<"Your guess is too big"<<endl;
        }
        else if(playerGuess<randomNumber){
            cout<<"Your guess is too small"<<endl;
        }
        numOfGuesses++;
    }
    printGameResult();
}


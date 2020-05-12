
#include <cstdlib>
#include <iostream>
#include "ConnectFour.h"

using namespace std;

/*
 *
 */
int main(int argc, char** argv) {
    ConnectFour game;



    while(!game.isGameFinished())
    {
        game.displayBoard();

        game.makeMove();

    }
    game.displayBoard();
    int winner=game.getWinner();
    cout<<"Game Status:" <<winner<<endl;

    return 0;
}
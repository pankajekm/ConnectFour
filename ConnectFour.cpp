//Copyright (c) 2020, Pankaj Kumar G
//All rights reserved.
// SPDX-License-Identifier: BSD 3-Clause
#include "ConnectFour.h"
#include<iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
ConnectFour::ConnectFour()
{
    //ctor
    last_move=UNINITIALIZED;
    game_finished=false;
    srand(time(0));
    if ( (rand() % 2 ) ==0 )
        player=HUMAN;
    else
        player=MACHINE;
    setBoard();
}

ConnectFour::~ConnectFour()
{
    //dtor
}
int ConnectFour::changeTurn()
{
    player=player*-1;
    return 0;

}

int ConnectFour::displayBoard()
{
    int i,j;
    for(i=ROW_END-1;i>=ROW_START;i--)
    {
        for(j=COL_START;j<COL_END;j++)
        {
            if (board[i][j]==-100)
                cout<<"R"<<" ";
            else if (board[i][j]==100)
                cout<<"G"<<" ";
            else
                cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
int ConnectFour::getScore()
{
    int x,y,i,j;
    if (last_move==UNINITIALIZED)
        return 0;
    y=last_move;
    x=col_top[last_move]-1;
    for(i=x-3;i<=x+3;i++)
    {

        if(board[i][y]+ board[i+1][y] +board[i+2][y]+board[i+3][y] == -400   )

            return HUMAN*400;

        if(board[i][y]+ board[i+1][y] +board[i+2][y]+board[i+3][y] == 400   )
            return MACHINE*400;
    }
    for(i=y-3;i<=y+3;i++)
    {
        if(board[x][i]+ board[x][i+1] +board[x][i+2]+board[x][i+3] == -400   )
            return HUMAN*400;
        if(board[x][i]+ board[x][i+1] +board[x][i+2]+board[x][i+3] == 400   )
            return MACHINE*400;
    }
    for(i=x-3,j=y-3;i<=x+3 && j<=y+3; i++,j++)
    {
        if( board[i][j]+board[i+1][j+1]+ board[i+2][j+2]+board[i+3][j+3]==-400  )
            return HUMAN*400;

        if( board[i][j]+board[i+1][j+1]+ board[i+2][j+2]+board[i+3][j+3]==400  )
            return MACHINE*400;

    }
    for(i=x-3,j=y+3;i<x+3 && j>=y-3; i++,j--)
    {
        if( board[i][j]+board[i+1][j-1]+ board[i+2][j-2]+board[i+3][j-3]==-400  )
            return HUMAN*400;
        if( board[i][j]+board[i+1][j-1]+ board[i+2][j-2]+board[i+3][j-3]==400  )
            return MACHINE*400;
    }

    for(i=x-3;i<=x+3;i++)
    {

        if(board[i][y]+ board[i+1][y] +board[i+2][y]+board[i+3][y] - board[x][y]- board[x][y]== 400   )

            return HUMAN*399;

        if(board[i][y]+ board[i+1][y] +board[i+2][y]+board[i+3][y]- board[x][y]- board[x][y] == -400   )
            return MACHINE*399;
    }

    for(i=y-3;i<=y+3;i++)
    {
        if(board[x][i]+ board[x][i+1] +board[x][i+2]+board[x][i+3] - board[x][y]- board[x][y]== 400   )
            return HUMAN*399;
        if(board[x][i]+ board[x][i+1] +board[x][i+2]+board[x][i+3] - board[x][y]- board[x][y]== -400   )
            return MACHINE*399;
    }
    for(i=x-3,j=y-3;i<=x+3 && j<=y+3; i++,j++)
    {
        if( board[i][j]+board[i+1][j+1]+ board[i+2][j+2]+board[i+3][j+3]- board[x][y]- board[x][y]==400  )
            return HUMAN*399;

        if( board[i][j]+board[i+1][j+1]+ board[i+2][j+2]+board[i+3][j+3]- board[x][y]- board[x][y]==-400  )
            return MACHINE*399;

    }
    for(i=x-3,j=y+3;i<x+3 && j>=y-3; i++,j--)
    {
        if( board[i][j]+board[i+1][j-1]+ board[i+2][j-2]+board[i+3][j-3]- board[x][y]- board[x][y]==400  )
            return HUMAN*399;
        if( board[i][j]+board[i+1][j-1]+ board[i+2][j-2]+board[i+3][j-3]- board[x][y]- board[x][y]==-400  )
            return MACHINE*399;
    }

    return 0;

}







int ConnectFour::getWinner()
{
    int x,y,i,j;
    if (last_move==UNINITIALIZED)
        return 0;
    y=last_move;
    x=col_top[last_move]-1;
    for(i=x-3;i<=x+3;i++)
    {

        if(board[i][y]+ board[i+1][y] +board[i+2][y]+board[i+3][y] == -400   )

            return HUMAN;

        if(board[i][y]+ board[i+1][y] +board[i+2][y]+board[i+3][y] == 400   )
            return MACHINE;
    }
    for(i=y-3;i<=y+3;i++)
    {
        if(board[x][i]+ board[x][i+1] +board[x][i+2]+board[x][i+3] == -400   )
            return HUMAN;
        if(board[x][i]+ board[x][i+1] +board[x][i+2]+board[x][i+3] == 400   )
            return MACHINE;
    }
    for(i=x-3,j=y-3;i<=x+3 && j<=y+3; i++,j++)
    {
        if( board[i][j]+board[i+1][j+1]+ board[i+2][j+2]+board[i+3][j+3]==-400  )
            return HUMAN;

        if( board[i][j]+board[i+1][j+1]+ board[i+2][j+2]+board[i+3][j+3]==400  )
            return MACHINE;

    }
    for(i=x-3,j=y+3;i<x+3 && j>=y-3; i++,j--)
    {
        if( board[i][j]+board[i+1][j-1]+ board[i+2][j-2]+board[i+3][j-3]==-400  )
            return HUMAN;
        if( board[i][j]+board[i+1][j-1]+ board[i+2][j-2]+board[i+3][j-3]==400  )
            return MACHINE;
    }
    return 0;

}

bool ConnectFour::isGameFinished()
{
    int i,j;
    if (last_move==UNINITIALIZED)
        return false;

    if (isWinningMove(col_top[last_move]-1,last_move))
        return true;


    for(j=COL_START;j<COL_END;j++)
    {
        if (col_top[j]!=ROW_END)
            return false;

    }

    return true;
}
bool ConnectFour::isLegalMove(int move)
{

    move=move+2;
    if(col_top[move]<COL_END)
        return true;



    return false;


}
bool ConnectFour::isWinningMove(int x,int y)
{
    int i,j;
//<<x<<" "<<y<<" :"<<endl;
    for(i=x-3;i<=x+3;i++)
    {

        if(board[i][y]+ board[i+1][y] +board[i+2][y]+board[i+3][y] == -400   )
            return true;

        if(board[i][y]+ board[i+1][y] +board[i+2][y]+board[i+3][y] == 400   )
            return true;
    }
    for(i=y-3;i<=y+3;i++)
    {
        // cout<<x<<","<<i<<"  " <<board[x][i]<<","<<board[x][i+1]<<","<<board[x][i+2]<<","<<board[x][i+3]<< " " <<i+1 <<" "<<i+2<<" "<<i+3<<endl;
        if(board[x][i]+ board[x][i+1] +board[x][i+2]+board[x][i+3] == -400   )
            return true;
        if(board[x][i]+ board[x][i+1] +board[x][i+2]+board[x][i+3] == 400   )
            return true;
    }
    for(i=x-3,j=y-3;i<=x+3 && j<=y+3; i++,j++)
    {
        if( board[i][j]+board[i+1][j+1]+ board[i+2][j+2]+board[i+3][j+3]==-400  )
            return true;

        if( board[i][j]+board[i+1][j+1]+ board[i+2][j+2]+board[i+3][j+3]==400  )
            return true;

    }
    for(i=x-3,j=y+3;i<x+3 && j>=y-3; i++,j--)
    {
        if( board[i][j]+board[i+1][j-1]+ board[i+2][j-2]+board[i+3][j-3]==-400  )
            return true;
        if( board[i][j]+board[i+1][j-1]+ board[i+2][j-2]+board[i+3][j-3]==400  )
            return true;
    }
    return false;

}

int ConnectFour::max(int x, int y)
{
    if(x==UNINITIALIZED)
        return y;
    if (y>x)
        return y;
    return x;

}


int ConnectFour::min(int x, int y)
{
    if(x==UNINITIALIZED)
        return y;
    if (y<x)
        return y;
    return x;

}
int ConnectFour::minimax(int player,int depth)
{
    //cout<<"current depth"<<depth<<endl;
    int lscore=0;
    if (depth !=0)
     lscore= getScore();
    if (depth==MAX_DEPTH || isGameFinished() || lscore==-399 ||lscore==399)
    {

       //if (lscore==399 || lscore==-399 )
       //    cout<<player<<lscore<< " ";
       return lscore +((MAX_DEPTH-depth)*2) ;


    }

    int move,movelist[9],movelist_count;
    int best_move,prev_bestmove;
    int best_score=UNINITIALIZED;
    int score=0,prev_bestscore;
    int i,j;
    movelist_count=0;
    for(i= 1;i<8;i++)
    {
        move=i;
        if(isLegalMove(move))
        {
            prev_bestmove=best_move;
            prev_bestscore=best_score;
            updateBoard(move);

            lscore=getScore();
            if (lscore==400 || lscore==-400)
            {

                if (depth==0)
                    return move;
                cancelUpdateBoard(move);
                return lscore;
            }
            else if (lscore==399 || lscore==-399)
            {

                score=lscore +((MAX_DEPTH-depth)*2);
                cancelUpdateBoard(move);

            }
            else {
                score = minimax(player * -1, depth + 1);

                cancelUpdateBoard(move);
            }
            if (player==MACHINE )
            {
                if(depth==0)
                    cout<<move<<" "<<score<<endl;
                best_score=max(best_score,score);
                if(best_score==score){
                    if (best_score!=prev_bestscore)
                    {
                        best_move=move;

                        movelist[0]=move;
                        movelist_count=1;
                    }
                    else
                    {
                        best_move=move;
                        movelist[movelist_count]=move;
                        movelist_count++;


                    }}


            }
            else
            {
                best_score=min(best_score,score);
                if(best_score==score){
                    if (best_score!=prev_bestscore)
                    {
                        best_move=move;

                        movelist[0]=move;
                        movelist_count=1;
                    }
                    else
                    {
                        best_move=move;
                        movelist[movelist_count]=move;
                        movelist_count++;

                    }
                }


            }




        }


    }

    if (depth==0)
    {

        best_move=pickBestMove(movelist,movelist_count);
        updateBoard(best_move);


    }
    return best_score;


}
int ConnectFour::pickBestMove(int movelist[],int movelist_count)
{
    return movelist[(rand() % movelist_count )];


}
int ConnectFour::makeMachineMove()
{
    int move,player;
    player=MACHINE;
    int i,j;

    for(j=1;j<8;j++)
    {
        move=j;
        if(isLegalMove(move))
        {

            updateBoard(move);
            return 0;

        }


    }



    return 0;
}



int ConnectFour::makeMove()
{
    int move;

    if (player==HUMAN)
    {
        do{
            cout<<"Enter your move :";
            cin>>move;


        }while(!isLegalMove(move));
        updateBoard(move);
        changeTurn();


    }
    else{
        cout<<"Computers Turn"<<endl;
        minimax(MACHINE,0);
//makeMachineMove();

        changeTurn();


    }

    return 0;
}
int ConnectFour::cancelUpdateBoard(int move)
{
    move=move+2;
    col_top[move]=col_top[move]-1;
    int x=col_top[move];

    board[x][move]= 0;

    // last_move=move;

    return 0;

}

int ConnectFour::updateBoard(int move)
{
    move=move+2;
    int x=col_top[move];
    //<<"current move"<<x<<","<<move<<endl;
    board[x][move]= player*100;
    col_top[move]=col_top[move]+1;
    last_move=move;

    return 0;

}

int ConnectFour::setBoard()
{
    int i,j;
    for(i=0;i<ROWS;i++)
        for(j=0;j<COLS;j++)
            board[i][j]=-1;
    for(i=ROW_END-1;i>=ROW_START;i--)
    {

        for(j=COL_START;j<COL_END;j++)
        {
            board[i][j]=0;
        }

    }

    for(j=COL_START;j<COL_END;j++)
    {
        col_top[j]=COL_START;

    }
    return 0;
}
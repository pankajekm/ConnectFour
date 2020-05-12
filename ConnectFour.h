#ifndef CONNECTFOUR_H
#define CONNECTFOUR_H
#define HUMAN -1
#define MACHINE 1
#define COLS 13
#define ROWS 12
#define UNINITIALIZED -10000
#define ROW_START 3
#define COL_START 3
#define ROW_END 9
#define COL_END 10
#define MAX_DEPTH 3

class ConnectFour
{
public:
    ConnectFour();
    virtual ~ConnectFour();
    int changeTurn();
    int cancelUpdateBoard(int move);
    int displayBoard();
    int getScore();
    int getWinner();
    int makeMove();
    int makeMachineMove();
    int max(int x,int y);
    int min(int x,int y);
    int minimax(int player,int depth);
    int pickBestMove(int movelist[],int movelist_count);
    bool isGameFinished();
    bool isLegalMove(int move);
    bool isWinningMove(int x, int y);
    int updateBoard(int move);
    int setBoard();


protected:

private:
    short int board[ROWS][COLS];
    bool game_finished;
    short int player;
    short int last_move;
    short int col_top[COLS];
};

#endif // CONNECTFOUR_H
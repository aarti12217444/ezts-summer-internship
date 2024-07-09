#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Game
{
private:
    vector<vector<char>> board;
    char currentPlayer;
    char otherPlayer;

public:
    Game()
    {
        board = vector<vector<char>>(3, vector<char>(3, ' '));
        currentPlayer = 'X';
        otherPlayer = 'O';
    }
    // char currentPlayer;
    void drawBoard()
    {
        cout << "Game display:\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << board[i][j] << " ";
                if (j < 2)
                {
                    cout << "| ";
                }
            }
            cout << endl;
            if (i < 2)
            {
                cout << "---------";
            }
            cout << endl;
        }
    }
    bool check()
    {
        {
            // Check rows
            for (int i = 0; i < 3; i++)
            {
                if (board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer)
                {
                    return true;
                }
            }

            // Check columns
            for (int i = 0; i < 3; i++)
            {
                if (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer)
                {
                    return true;
                }
            }

            // Check diagonals
            if (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer)
            {
                return true;
            }
            if (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer)
            {
                return true;
            }

            return false;
        }
    }
    void start()
    {
        int turn = 1;
        while (true)
        {
            drawBoard();
            int row, column;
            cout << "enter your move " <<currentPlayer<<endl;

            cin >> row >> column;
            if (row <= 3 && column <= 3 && row > 0 && column > 0 && board[row -1][column - 1]!='X' && board[row -1][column - 1]!='O')
            {

                board[row - 1][column - 1] = currentPlayer;

                if (check())
                {
                    cout << currentPlayer << "won" << endl;
                    drawBoard();
                    break;
                }
                if (turn == 9)
                {
                    cout << "the match draw" << endl;
                    drawBoard();
                    break;
                }
                turn++;
                if (currentPlayer == 'X')
                {
                    currentPlayer = 'O';
                }
                else
                {
                    currentPlayer = 'X';
                }
            }
            else
            {
                cout << "Invalid move" << endl;
            }

            // to check the term and increemnt the term,win check
            // to call check function in if else,and break
        }
    }
};
int main()
{
    Game g1;
    g1.start();
    return 0;
}

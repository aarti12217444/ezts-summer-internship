#include <iostream>
using namespace std;
class Game
{
public:
    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
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
    bool check(){
        
    }
    void start()
    {
        while (true)
        {
            drawBoard();
                        //to check the term and increemnt the term,win check
                       //to call check function in if else,and break
        }
    }
};
int main()
{
    Game g1;
    g1.drawBoard();
    return 0;
}
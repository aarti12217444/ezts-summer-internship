#include <iostream>
#include <vector>

using namespace std;

#define n 9

// Function to print the board
void printBoard(int board[n][n]) {
    for (int r = 0; r < n; r++) {
        for (int d = 0; d < n; d++) {
            cout << board[r][d] << " ";
        }
        cout << endl;
    }
}

// Function to check if a number is valid in the current position
bool isValid(int board[n][n], int row, int col, int num) {
    // Check the row
    for (int x = 0; x < n; x++) {
        if (board[row][x] == num) {
            return false;
        }
    }

    // Check the column
    for (int x = 0; x < n; x++) {
        if (board[x][col] == num) {
            return false;
        }
    }

    // Check the 3x3 subgrid
    int startRow = row - row % 3, startCol = col - col % 3;
    for (int r = 0; r < 3; r++) {
        for (int d = 0; d < 3; d++) {
            if (board[r + startRow][d + startCol] == num) {
                return false;
            }
        }
    }

    return true;
}

// Function to find an empty cell in the board
bool findEmpty(int board[n][n], int &row, int &col) {
    for (row = 0; row < n; row++) {
        for (col = 0; col < n; col++) {
            if (board[row][col] == 0) {
                return true;
            }
        }
    }
    return false;
}

// Function to solve the Sudoku puzzle using backtracking
bool solveSudoku(int board[n][n]) {
    int row, col;
    if (!findEmpty(board, row, col)) {
        return true; // No empty cell means puzzle is solved
    }

    for (int num = 1; num <= 9; num++) {
        if (isValid(board, row, col, num)) {
            board[row][col] = num;

            if (solveSudoku(board)) {
                return true;
            }

            board[row][col] = 0; // Undo the current cell for backtracking
        }
    }

    return false;
}

int main() {
    int board[n][n] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    if (solveSudoku(board)) {
        printBoard(board);
    } else {
        cout << "No solution exists" << endl;
    }

    return 0;
}

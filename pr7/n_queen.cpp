#include <bits/stdc++.h>
#define N 8

bool isSafe(int board[N][N], int row, int col)
{
    int i, j;
    for (i = 0; i < col; i++)
        if (board[row][i])
            return false;

    /* for Checking upper diagonal on left side */
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    /*for Checking lower diagonal on left side */
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j])
            return false;

    return true;
}

bool solveNQUtil(int board[N][N], int col)
{
    if (col >= N)
        return true;
    for (int row = 0; row < N; row++)
    {
        if (isSafe(board, row, col))
        {
            board[row][col] = 1;

            if (solveNQUtil(board, col + 1))
                return true;

            board[row][col] = 0; // Backtracking..
        }
    }
    return false;
}

bool solveNQ()
{
    int board[N][N] = {{0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0},
                       {0, 0, 0, 0}};

    if (solveNQUtil(board, 0) == false)
    {
        printf("Solution does not exist");
        return false;
    }
    //for printing solution
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf(" %d ", board[i][j]);
        printf("\n");
    };
    return true;
}
int main()
{
    solveNQ();
    return 0;
}

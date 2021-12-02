

#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;
int minCost(int input[][1000], int n, int m, int row , int column , int arr[][1000])
{

    if (arr[row][column] != -1)
    {
        return arr[row][column];
    }
    if (m - 1 == column && n - 1 == row)
    {
        return input[row][column];
    }
    if (n - 1 == row)
    {
        int a = 0;
        for (int i = column; i < m; i++)
        {
            a += input[row][i];
        }
        return a;
    }
    if (m - 1 == column)
    {
        int a = 0;
        for (int i = row; i < n; i++)
        {
            a += input[i][column];
        }
        return a;
    }
    int a = input[row][column];
    int b = minCost(input, n, m, row, column + 1, arr);
    int c = minCost(input, n, m, row + 1, column + 1, arr);
    int d = minCost(input, n, m, row + 1, column, arr);
    b = min(b, c);
    b = min(b, d);
    arr[row][column] = a + b;
    return a + b;
}

//memoziation
// int minCostPath(int **input, int n, int m)
// {
//     int **arr = new int *[n];
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = new int[m];
//         for (int j = 0; j < m; j++)
//         {
//             arr[i][j] = -1;
//         }
//     }
//     return minCost(input, n, m, 0, 0, arr);
// }

// int mincostpath(int **input, int m, int n, int sr, int sc)
// {
//     if (sr == m - 1 && sc == n - 1)
//         return input[sr][sc];
//     int x, y, z;
//     x = y = z = INT_MAX;

//     if (sr < m - 1)
//         x = mincostpath(input, m, n, sr + 1, sc); //down
//     if (sc < n - 1)
//         y = mincostpath(input, m, n, sr, sc + 1); //right

//     if (sr < m - 1 && sc < n - 1)
//         z = mincostpath(input, m, n, sr + 1, sc + 1); //diagonal

//     return input[sr][sc] + min(x, min(y, z));
// }

// int minCostPath(int **input, int m, int n)
// {

//     return mincostpath(input, m, n, 0, 0);
// }

int main()
{
    int n, m;
    cin >> n >> m;
    int array[n][1000];
    int output[n][1000];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> array[i][j];
        }
    }
    cout << "\n\n\n\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            output[i][j]=-1;
        }
    }

    int ans = minCost(array, n, m,0,0, output);
    cout << ans;
}
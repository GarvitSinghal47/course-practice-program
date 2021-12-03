#include <bits/stdc++.h>
bool bfs(vector<vector<char>> &board, int n, int m, int ci, int cj, vector<vector<bool>> &visited, string s)
{
    //ci=current i index;
    //cj=currenj j index;
    // n=no of rows
    //m=no of  column;

    //here we will find the answer or the next character in the all possible direction available and has to work according to it for finding it and when we find it we must have to do again same for it and if we find the whole string this we then we will return true otherwise false will be written.
    if (s.size() == 0)
    {
        return true;
    }
    //it will mark in the visited array for each correct we found for the word.
    visited[ci][cj] = true;

    bool ans = false;
    if (ci + 1 < n && !visited[ci + 1][cj] && board[ci + 1][cj] == s[0]) // down
    {
        if (bfs(board, n, m, ci + 1, cj, visited, s.substr(1)))
            return true;
    }

    if (ci - 1 >= 0 && !visited[ci - 1][cj] && board[ci - 1][cj] == s[0]) // up

    {
        if (bfs(board, n, m, ci - 1, cj, visited, s.substr(1)))
            return true;
    }
    if (cj - 1 >= 0 && !visited[ci][cj - 1] && board[ci][cj - 1] == s[0]) // left
    {
        if (bfs(board, n, m, ci, cj - 1, visited, s.substr(1)))
            return true;
    }

    if (cj + 1 < m && !visited[ci][cj + 1] && board[ci][cj + 1] == s[0]) // right
    {
        if (bfs(board, n, m, ci, cj + 1, visited, s.substr(1)))
            return true;
    }

    if (ci + 1 < n && cj - 1 >= 0 && !visited[ci + 1][cj - 1] && board[ci + 1][cj - 1] == s[0]) // down left
    {
        if (bfs(board, n, m, ci + 1, cj - 1, visited, s.substr(1)))
            return true;
    }

    if (ci + 1 < n && cj + 1 < m && !visited[ci + 1][cj + 1] && board[ci + 1][cj + 1] == s[0]) // down right
    {
        if (bfs(board, n, m, ci + 1, cj + 1, visited, s.substr(1)))
            return true;
    }

    if (ci - 1 >= 0 && cj - 1 >= 0 && !visited[ci - 1][cj - 1] && board[ci - 1][cj - 1] == s[0]) // up left
    {
        if (bfs(board, n, m, ci - 1, cj - 1, visited, s.substr(1)))
            return true;
    }

    if (ci - 1 >= 0 && cj + 1 < m && !visited[ci - 1][cj + 1] && board[ci - 1][cj + 1] == s[0]) // up right
    {
        if (bfs(board, n, m, ci - 1, cj + 1, visited, s.substr(1)))
            return true;
    }

    visited[ci][cj] = false;

    return ans;
}

bool hasPath(vector<vector<char>> &board, int n, int m)
{
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (board[i][j] == 'C')
            {

                string s = "ODINGNINJA";

                if (bfs(board, n, m, i, j, visited, s))
                    return true;
            }
        }
    }
    return false;
}
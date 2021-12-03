#include <iostream>
# include<queue>
using namespace std;

void print(int **edges, int n, int sv)
{
    queue<int>pendingvertices;
    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    pendingvertices.push(sv);
    visited[sv] = true;
    while(!pendingvertices.empty())
    {
        int currentvertex = pendingvertices.front();
        pendingvertices.pop();
        cout << currentvertex << endl;

        for (int i = 0; i < n; i++)
        {
            if(i==currentvertex)
            {
                continue;
            }
            if(edges[currentvertex][i]&&!visited[i])
            {
                pendingvertices.push(i);
                visited[i] = true;

            }
        }
        
    }
        }

int main()
{
    int n;
    int e;

    cin >> n >> e;
    int **edges = new int *[n];
    for (int i = 0; i < n; i++)
    {
        edges[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            edges[i][j] = 0;
        }
    }
    for (int i = 0; i < e; i++)
    {
        int f, s;
        cin >> f >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }
    

    print(edges, n, 0 );

    for (int i = 0; i < n; i++)
    {
        delete[] edges[i];
    }
    delete[] edges;
}
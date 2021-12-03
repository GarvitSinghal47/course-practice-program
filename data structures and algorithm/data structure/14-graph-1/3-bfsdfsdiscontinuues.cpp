#include <iostream>
#include <queue>
using namespace std;

void printdfs(int **edges, int n, int sv, bool *visited)
{
    cout << sv << endl;
    visited[sv] = true;
    for (int i = 0; i < n; i++)
    {
        if (i == sv)
        {
            continue;
        }
        if (edges[sv][i] == 1)
        {
            if (visited[i])
            {
                continue;
            }
            printdfs(edges, n, i, visited);
        }
    }
}
void dfs(int**edges,int n)
{
    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
           
    printdfs(edges, n, i, visited);
        }
        
        
    }
    
}
void printbfs(int **edges, int n, int sv,bool *visited)
{
    queue<int> pendingvertices;
   
    pendingvertices.push(sv);
    visited[sv] = true;
    while (!pendingvertices.empty())
    {
        int currentvertex = pendingvertices.front();
        pendingvertices.pop();
        cout << currentvertex << endl;

        for (int i = 0; i < n; i++)
        {
            if (i == currentvertex)
            {
                continue;
            }
            if (edges[currentvertex][i] && !visited[i])
            {
                pendingvertices.push(i);
                visited[i] = true;
            }
        }
    }
}
void Bfs(int **edges, int n)
{
    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {

            printbfs(edges, n, i, visited);
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

    dfs(edges, n);
    cout << "\n\n\n";
    Bfs(edges, n);

    for (int i = 0; i < n; i++)
    {
        delete[] edges[i];
    }
    delete[] edges;
}
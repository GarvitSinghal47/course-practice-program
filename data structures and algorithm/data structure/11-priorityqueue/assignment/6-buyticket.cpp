#include <queue>
# include<iostream>
using namespace std;
int buyTicket(int *arr, int n, int k)
{

    queue<int> p; //a queue of indices
    for (int i = 0; i < n; i++)
        p.push(i);

    priority_queue<int> pq;
    //build a heap
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
    }

    int time = 0;

    while (p.front() != k || pq.top() != arr[p.front()]) //unless ticket counter meets me and i am the priority .
    {                                                    //if less priority send at end of queue
        if (pq.top() > arr[p.front()])
        {
            int x = p.front();
            p.pop();
            p.push(x);
        }

        else if (pq.top() == arr[p.front()])
        {
            pq.pop();
            p.pop();
            time++; //incres time
        }
    }
    return time + 1; //now i will be getting the ticket
}

int main()
{
    int n;
    cin >> n;

    int input[n];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    int k;
    cin >> k;

   int ans= buyTicket(input,n,k);
   cout<<ans;
}
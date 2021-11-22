#include <bits/stdc++.h>
using namespace std;

int  largestnth(int arr[], int n, int k)
{

    if (k > n)
    {
        return -1;
    }
    int size = n;

    priority_queue<int, vector<int>> pq(arr, arr + size);

    int index = 0;
    for (int i = 0; i < k-1; i++)
    {
        
        pq.pop();
    }
    return pq.top();
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
    int ans = largestnth(input, n,k);
    cout << ans;
}
#include <iostream>
#include <queue>
using namespace std;
vector<int> ksmallest(int input[], int n, int k)
{
    priority_queue<int, vector<int>> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push(input[i]);
    }
    for (int i = k; i < n; i++)
    {
        if (input[i] < pq.top())
        {
            pq.pop();
            pq.push(input[i]);
        }
    }
    vector<int> ans;
    while (!pq.empty())
    {
        ans.push_back(pq.top());
        pq.pop();
    }

    return ans;
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
   vector<int>ans= ksmallest(input, n, k);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i]<<" ";
    }
}
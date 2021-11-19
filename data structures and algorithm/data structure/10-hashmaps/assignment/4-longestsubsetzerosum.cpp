#include <bits/stdc++.h>
using namespace std;


int  longestsubset(int *input, int n)
{
    unordered_map<int, int> m;

    int length = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += input[i];

        if (input[i] == 0 && length == 0)
            length = 1;

        if (sum == 0)
            length = i + 1;

        if (m.count(sum) > 0)
        {
            length = max(length, i - m[sum]);
        }
        else
        {
            m[sum] = i;
        }
    }

    return length;
}

int main()
{
    int n;
    cin >> n;
    int inputay[n];
    for (int i = 0; i < n; i++)
    {

        cin >> inputay[i];
    }
    
    for (int i = 0; i < n; i++)
    {

        cout << inputay[i] << " ";
    }
    cout << endl;
    int ans = longestsubset(inputay, n);
    cout << ans;
}
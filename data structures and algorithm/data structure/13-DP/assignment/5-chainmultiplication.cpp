#include <bits/stdc++.h>
using namespace std;

int f(vector<vector<int>> &dp, int *p, int s, int e)
{
    if (e - s == 1)
        return 0;

    if (dp[s][e])
        return dp[s][e];

    int ans = INT_MAX;
    for (int k = s + 1; k < e; k++)
    {
        int temp = f(dp, p, s, k) + f(dp, p, k, e) + p[s] * p[k] * p[e];
        ans = min(ans, temp);
    }
    dp[s][e] = ans;
    return ans;
}

int mcm(int *p, int n)
{

    /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
  */

    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    int ans = f(dp, p, 0, n);
    return ans;
}

int main()
{

    int n;
    cin >> n;
    int array[n];
    int z;
    cin >> z;
    for (int i = 0; i < z; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < z; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    int ans = mcm(array, n);
    cout << ans;
}
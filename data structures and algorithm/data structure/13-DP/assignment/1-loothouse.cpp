# include<iostream>
using namespace std;
//dp
int getmaxmoney(int arr[], int n, int *dp)
{
    dp[0] = arr[0];
    dp[1] = max(arr[0], arr[1]);

    for (int i = 2; i < n; i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + arr[i]);
    }
    return dp[n - 1];
}
int getMaxMoney(int arr[], int n)
{
    int dp[n];

    return getmaxmoney(arr, n, dp);
}

int main ()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];

    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] <<" ";

    }
    cout << endl;
    int ans = getMaxMoney(array, n);
    cout << ans;
}
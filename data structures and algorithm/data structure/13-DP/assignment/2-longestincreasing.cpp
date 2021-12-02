#include <iostream>
using namespace std;
//dp
int longestincreasing(int arr[], int n, int *dp)
{
  
    dp[0] = 1;
    for (int i = 1; i < n; i++)
    {
        int ans = 0;

        for (int j = i - 1; j >= 0; j--)
        {
            //max between the ans ans and dp[i] is consodered to check if there is any data stored in the ans array which is greater than the current ans as we are making the call for the backward ans.
            if (arr[j] < arr[i])
            {
                //this will check between the current j and the answer saved from the previous call that is greater than from him.
                ans = max(dp[j], ans);
            }
        }
        dp[i] = ans + 1;
    }
    int res = 0;
    for (int i = 0; i < n; i++)
        res = max(dp[i], res);
    return res;
}
int longestIncreasing(int arr[], int n)
{
    int dp[n];

    return longestincreasing(arr, n, dp);
}

int main()
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
        cout << array[i] << " ";
    }
    cout << endl;
    int ans = longestIncreasing(array, n);
    cout << ans;
}
#include <iostream>
using namespace std;
# include<cmath>

int minstep_helper(int n,int *arr)
{
    if (n <= 1)
    {
        return 0;
    }
    if(arr[n]!=-1)
    {
        return arr[n];
    }
    int x = minstep_helper(n - 1,arr);
    int y = INT32_MAX, z = INT32_MAX;
    if (n % 2 == 0)
    {
        z = minstep_helper(n / 2,arr);
    }
    if (n % 3 == 0)
    {
        y = minstep_helper(n / 3,arr);
    }
   

    int ans = min(x, min(y, z))+1;
    arr[n] = ans;

    return ans;
}
int minstep(int n)
{
     int  *arr = new int[n+1];
    for (int i = 0; i <= n; i++)
    {
        arr[i] = -1;
    }
    return minstep_helper(n, arr);
}

int main()
{
    int n;
    cin >> n;
    int ans = minstep(n);
    cout << ans;
}
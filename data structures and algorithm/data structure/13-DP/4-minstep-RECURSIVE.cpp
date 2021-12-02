#include <iostream>
using namespace std;
# include<cmath>

int minstep(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    int x = minstep(n - 1);
    int y = INT32_MAX, z = INT32_MAX;
    if (n % 2 == 0)
    {
        z = minstep(n/2);
    }
    if (n % 3 == 0)
    {
       y= minstep(n/3);
    }
   

    int ans = min(x, min(y, z))+1;

    return ans;
}

int main()
{
    int n;
    cin >> n;
    int ans = minstep(n);
    cout << ans;
}
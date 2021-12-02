#include <iostream>
using namespace std;
#include <cmath>

int minstep(int n)
{
    int *arr = new int[n + 1];
    if (n <= 1)
    {
        arr[n] = 0;
    }
    
    for (int i = 2; i <=n; i++)

    {
        int x = minstep(n - 1);
        int y = INT32_MAX, z = INT32_MAX;
        if (n % 2 == 0)
        {
            z = minstep(n / 2);
        }
        if (n % 3 == 0)
        {
            y = minstep(n / 3);
        }

        int ans = min(x, min(y, z)) + 1;
        arr[n] = ans;
    }
    return arr[n];
}

int main()
{
    int n;
    cin >> n;
    int ans = minstep(n);
    cout << ans;
}
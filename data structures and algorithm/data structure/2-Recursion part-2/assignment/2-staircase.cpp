// C++ Program to find n-th stair using step size
// 1 or 2 or 3.
#include <iostream>
using namespace std;

int staircase(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else if (n == 2)
    {
        return 2;
    }

    int ans1 = staircase(n - 1);
    int ans2 = staircase(n - 2);
    int ans3=staircase(n - 3);

    return  ans1+ ans2+ans3;
}

// Driver code
int main()
{
    int n;
    cin >> n;

    int ans = staircase(n);
    cout << ans;
    return 0;
}

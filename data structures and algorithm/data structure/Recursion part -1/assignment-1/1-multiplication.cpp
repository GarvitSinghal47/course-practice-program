#include <iostream>
using namespace std;

int multi(int m, int n)
{
    if (n == 0)
    {
        return 0;
    }

    int ans = m + multi(m, n - 1);

    return ans;
}

int main()
{
    int M, N;
    cin >> M;
    cin >> N;

    cout << multi(M, N) << endl;
}
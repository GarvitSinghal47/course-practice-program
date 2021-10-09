#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int profit(int n, int array[])
{
    sort(array, array + n);
    int maxprofit = 0;
    for (int i = 0; i < n; i++)
    {
        int ans = array[i] * (n - i);
        if (ans > maxprofit)
        {
            maxprofit = ans;
        }
    }
    return maxprofit;
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
    int ans = profit(n, array);
    cout << ans;
}
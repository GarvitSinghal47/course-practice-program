#include <bits/stdc++.h>
using namespace std;
///solution 2
bool checkMaxHeap(int arr[], int n)
{

    for (int child = 1; child < n; child++)
    {
        int parent = (child - 1) / 2;
        if (arr[parent] < arr[child])
            return false;
    }
}
int main()
{
    int n;
    cin >> n;

    int input[n];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    bool ans = checkMaxHeap(input, n);
    cout << ans;
}
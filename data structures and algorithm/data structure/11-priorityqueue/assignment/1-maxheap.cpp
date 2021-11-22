#include <bits/stdc++.h>
using namespace std;

///solution 1
bool maxheap(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[2 * (i) + 1] < n && arr[2 * (i) + 2] < n)
        {
            if (arr[i] > arr[2 * (i) + 1] && arr[i] > arr[2 * (i) + 2])
            {
                continue;
            }
            else
            {
                return false;
            }
        }
        if (arr[2 * (i) + 1] < n && arr[2 * (i) + 2] > n)
        {
            if (arr[i] > arr[2 * (i) + 1] )
            {
                continue;
            }
            else
            {
                return false;
            }
        }
        if (arr[2 * (i) + 1] >n && arr[2 * (i) + 2] > n)
        {
            continue;
                }
    }
    return true;
}


///solution 2
bool checkMaxHeap(int arr[], int n){

   for(int child=1; child<n ;child++)
    {
        int parent = (child-1)/2;
        if(arr[parent]<arr[child])
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

    bool ans = maxheap(input, n);
    cout << ans;
}

// C++ program to find all the triplets with the given sum

#include <bits/stdc++.h>
using namespace std;

void find_all_triplets(int arr[], int n, int sum)
{
    sort(arr, arr + n);

    for (int i = 0; i < n - 1; i++)
    {
        if(i==0||(i>0 && arr[i]!=arr[i-1]))
        {
            int lo = i + 1;
            int hi = n - 1;
            int x = arr[i];
            while (lo < hi)
            {
                if (x + arr[lo] + arr[hi] == sum)
                {
                     printf(" %d %d %d\n", x, arr[lo], arr[hi]);
                    while(lo<hi&&arr[lo]==arr[lo+1])lo++;
                    while(lo>hi&&arr[hi]==arr[hi+1])hi++;
                   
                    lo++;
                    hi--;
                }

                else if (x + arr[lo] + arr[hi] < sum)
                    lo++;

                else
                    hi--;
            }
        }
    }
}

int main()
{
    int n, sum;
    cout << "\nEnter the number of elements : ";
    cin >> n;
    int arr[n];
    cout << "\nInput the array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\nEnter the sum value : ";
    cin >> sum;
    cout << "\nThe triplets are \n ";
    find_all_triplets(arr, n, sum);
    return 0;
}
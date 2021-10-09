#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void pairsum(int array[], int n, int k)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (array[i] + array[j] == k)
        {
            cout << "(" << array[i] << "," << array[j] << ")" << endl;
            i++;
        }
        if(array[i] + array[j] >k)
        {
            j--;
        }
        if(array[i] + array[j] <k)
        {
            i++;
        }
    }
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
        cout << array[i]<<" ";
    }
    cout<<endl;
    int k;
    cin>>k;
    sort(array,array+n);
    pairsum(array, n,k);
}
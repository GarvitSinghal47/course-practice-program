// C++ program to rotate array using temp array

#include <bits/stdc++.h>
using namespace std;

void rotatearray(int arr[], int n, int no)
{
    int temp[no];
    for (int i = 0; i < no; i++)
    {
        temp[i]=arr[i];
        
    }
    for (int i = 0; i <n-no; i++)
    {
        arr[i]=arr[no+i];
        
    }
    for (int i = 0; i <no; i++)
    {
        arr[n-no+i]=temp[i];
        
    }
    
    
    
    
}

int main()
{
    int n, no;
    cout << "\nEnter the number of elements : ";
    cin >> n;
    int arr[n];
    cout << "\nInput the array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\nEnter the no's to be rotated  : ";
    cin >> no;
    
    rotatearray(arr, n, no);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
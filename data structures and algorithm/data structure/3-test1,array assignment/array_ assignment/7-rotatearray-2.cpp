#include<iostream>
using namespace std;
 
// Function to reverse a given subarray
void reverse(int A[], int low, int high)
{
    for (int i = low, j = high; i < j; i++, j--)
    {
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
}
 
// Function to right-rotate an array by `k` positions
void rotatearray(int A[], int k, int n)
{
    // base case: invalid input
    if (k < 0 || k >= n) {
        return;
    }
 
    // Reverse the last `k` elements
    reverse(A, n - k, n - 1);
 
    // Reverse the first `n-k` elements
    reverse(A, 0, n - k - 1);
 
    // Reverse the whole array
    reverse(A, 0, n - 1);
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
    
    rotatearray(arr, no, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}






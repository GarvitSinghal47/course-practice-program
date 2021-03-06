/*

Given an integer array (of length n), find and return all the subsets of input array.
Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
Note : The order of subsets are not important.
Input format :

Line 1 : Size of array

Line 2 : Array elements (separated by space)

Sample Input:
3
15 20 12
Sample Output:
[] (this just represents an empty array, don't worry about the square brackets)
12 
20 
20 12 
15 
15 12 
15 20 
15 20 12 

/***
You need to save all the subsets in the given 2D output array. And return the number of subsets(i.e. number of rows filled in output) from the given function.

In ith row of output array, 1st column contains length of the ith subset. And from 1st column actual subset follows.
For eg. Input : {1, 2}, then output should contain 
{{0}, 		// Length of this subset is 0
{1, 2},		// Length of this subset is 1
{1, 1},		// Length of this subset is also 1
{2, 1, 2}}	// Length of this subset is 2

Don’t print the subsets, just save them in output.
***/
#include <iostream>
using namespace std;
int subset(int input[], int n, int output[][20])
{
    // Write your code here
    if (n <= 0)
    {
        output[0][0] = 0;
        return 1;
    }

    int smallOutput = subset(input + 1, n - 1, output);
    //here iteration has done for les than small output as the no will have to beadded at all the element preciding before for each call
    for (int i = 0; i < smallOutput; i++)
    {
        //this step is done as in each call one element will get added or attached at the first position at the first position for each call
        int col = output[i][0] + 1;
        //small output will tell how much no has been added and we will have to add after that o of elements 
        output[i + smallOutput][0] = col;
        output[i + smallOutput][1] = input[0];
        for (int j = 2; j < col + 1; j++)
        {
            //j-1 is used as the no that was at j-1 position of old array will get shift or placed at j position of the new array
            output[i + smallOutput][j] = output[i][j - 1];
        }
    }
//when we return small output it will tell how many no are  present in a current call or no of rows that are increased 
    return 2 * smallOutput;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // input array

    int output[10000][20];

    int size = subset(arr, n, output);
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j <= output[i][0]; j++)
        {
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
}
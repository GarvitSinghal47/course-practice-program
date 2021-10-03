// CPP program to find all indices of a number
#include <bits/stdc++.h>
using namespace std;

//small answer is the no of elements in output array to print 
// A recursive function to find all
// indices of a number
int AllIndexesRecursive(int input[], int size,
                        int x, int output[])
{

    // If an empty array comes
    // to the function, then
    // return zero
    if (size == 0)
    {
        return 0;
    }
    //when size become zero it will return 0 and the initial ans of small answer became 0

    // Getting the recursive answer
    int smallAns = AllIndexesRecursive(input + 1,
                                       size - 1, x, output);

    // If the element at index 0 is equal
    // to x then add 1 to the array values
    // and shift them right by 1 step
    if (input[0] == x)
    {
        for (int i = smallAns - 1; i >= 0; i--)
        {
            output[i + 1] = output[i] + 1;
        }

        // Put the start index in front
        // of the array
        output[0] = 0;
        smallAns++;
    }
    else
    {

        // If the element at index 0 is not equal
        // to x then add 1 to the array values
        for (int i = smallAns - 1; i >= 0; i--)
        {
            output[i] = output[i] + 1;
        }
    }
    return smallAns;
}

// Function to find all indices of a number
void AllIndexes(int input[], int n, int x)
{
    int output[n];
    int size = AllIndexesRecursive(input, n, x, output);
    for (int i = 0; i < size; i++)
    {
        cout << output[i] << " ";
    }
}

// Driver Code
int main()
{
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    int x;

    cin >> x;

    // Function call
    AllIndexes(input, n, x);

    return 0;
}

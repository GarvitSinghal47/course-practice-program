#include <iostream>
using namespace std;

int secondlargest(int array[], int n)
{
    int first = 0, second = -1;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > array[first])
        {
            second = first;
            first = i;
        }

        // this step is done as the element may be smaller than first but it can be greater than second so this step will replace the second to the current i or second largest index and to eleminate equal to step 
        else if (array[i] < array[first])
        {
            if (second == -1 || array[second] < array[i])
                second = i;
        }
    }
    return second;
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

    // sizeof(array)/sizeof(array[0]) is used to get the no of element if it was not divided like this then it would have returned value of the size of array that is of int means 4

    // here function will return second and it will get stored in the value of index

    int index = secondlargest(array, sizeof(array) / sizeof(array[0]));

    // -1 is the default value of second

    if (index == -1)
        cout << "Second Largest didn't exist";
    else
        cout << "Second largest : " << array[index];
}

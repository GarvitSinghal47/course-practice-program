#include <iostream>
using namespace std;

void rotate(int array[], int n, int t)
{
    int temp[t];
    {
        for (int i = 0; i < t; i++)
        {
            temp[i] = array[i];
        }
    }

    int count = 0;
    for (int i = t; i < n; i++)
    {

        array[count] = array[i];
        count++;
    }

    for (int i = 0; i < t; i++)
    {
        array[count] = temp[i];
        count++;
    }
}

int main()
{
    int n, t;
    cout << "tell the n";
    cin >> n;
    cout << "tell the elements of array";
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "tell the value of t";
    cin >> t;
    rotate(array, n, t);
    for (int count = 0; count < n; count++)
    {
        cout << array[count]<<" ";
    }
    return 0;
}

#include <iostream>
using namespace std;

void insertion(int array[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int current = array[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (current < array[j])
            {
                array[j + 1] = array[j];
            }
            else
            {
                break;
            }
        }
        array[j+1]=current;
    }
}

int main()
{
    int n;
    cout << "tell the no of elements in array";
    cin >> n;
    int array[n];
    cout << "tell the elements in array";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    insertion(array, n);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}
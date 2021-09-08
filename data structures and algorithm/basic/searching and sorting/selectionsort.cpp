#include <iostream>
using namespace std;
void search(int n, int input[])
{
    for (int i = 0; i < (n - 1); i++)
    {
        int min = input[i], minindex = i;
        // here j is used to select the conjugent element to compare with minor previous element
        for (int j = i + 1; j < n; j++)
        {
            if (input[j] < min)
            {
                min = input[j];
                minindex = j;
            }
        }
        int temp;
        temp = input[i];
        // here instead of j min index is used  AS J IS NOT DEFINED OUTSIDE loop here min index is the reference of j.
        input[i] = input[minindex];
        input[minindex] = temp;
    }
}

int main()
{
    int input[] = {2, 8, 9, 7, 5, 3};
    for (int i = 0; i < 6; i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;

    search(6, input);
    for (int i = 0; i < 6; i++)
    {
        cout << input[i] << " ";
    }
}

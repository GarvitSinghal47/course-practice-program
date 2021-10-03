#include <iostream>
using namespace std;
bool fun(int array[], int length)
{

    if (length == 0 || length == 1)
    {
        return true;
    }

    if (array[0] > array[1])
    {
        return false;
    }
    bool smalloutput = fun(array + 1, length - 1);
    return smalloutput;
}

int main()
{
    int array[] = {3, 4, 55, 61, 7, 78};
    size_t length = sizeof(array) / sizeof(array[0]);
    cout <<(bool)fun(array, length) << endl;
}
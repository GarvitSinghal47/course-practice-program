#include <iostream>
using namespace std;
// arr: input array
// i: ith index of input array
// n: size of arr
// subset: array to store the subset
// j: current size of subset
void PrintAllSubsets(int *arr, int i, int n, int *subset, int j)
{
    // checking if all elements of the array are traverse or not
    if (i == n)
    { //---1
        // print the subset array
        int idx = 0;
        while (idx < j)
        {
            cout << subset[idx] << ' ';
            ++idx;
        }
        cout << endl;
        return;
    }
    // for each index i, we have 2 options
    // case 1: i is not included in the subset
    // in this case simply increment i and move ahead
    //here same or full array is called for each above function but printing of the elment depend on the value of array;
    PrintAllSubsets(arr, i + 1, n, subset, j); //-------2
    // case 2: i is included in the subset
    // insert arr[i] at the end of subset
    // increment i and j
    //it will add the no of elemnt from ythe call no of i to the last call no or value of  n in the subset array,
    subset[j] = arr[i]; //--------------3
    //this code i suseed to increase j for each call so that element can be printed by upper code while using it
    //and the value of i will be equal to call no before procedding to the next step
    PrintAllSubsets(arr, i + 1, n, subset, j + 1); //--------------4
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
    int subset[100]; // temporary array to store subset

    PrintAllSubsets(arr, 0, n, subset, 0);
}

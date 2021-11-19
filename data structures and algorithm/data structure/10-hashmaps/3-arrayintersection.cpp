#include <iostream>
#include <unordered_map>
using namespace std;
void intersection(int array[], int arr[], int size,int size2)
{

    unordered_map<int, int> m1;

    for (int i = 0; i < size; i++)
        m1[array[i]]++;

    for (int i = 0; i < size2; i++)
    {
        if (m1[arr[i]] > 0)
        {
            cout << arr[i] << " ";
            m1[arr[i]]--; //reduce its occurence by 1;
        }
    }
}

int main()
{
    int n,m;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cin >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
 intersection(array,arr, n,m);
   
}
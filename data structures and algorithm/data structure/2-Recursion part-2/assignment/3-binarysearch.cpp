
#include <iostream>
using namespace std;


int check(int high, int low, int array[], int key)
{

    int mid = (low + high) / 2;
    if 
     (low <= high)
    {
        if (array[mid]== key)
        {
            return mid;
        }
        else if (array[mid] > key)
        {
            int ans= check(mid - 1, low, array, key);
            return ans;
        }
        else if (array[mid] < key)
        {
            int ans=check(high, mid + 1, array, key);
            return ans;
        }
    }
    else
    {
        return -1;
    }
}
int bs(int n, int array[], int key)
{
    int low = 0;
    int high = n - 1;

    int ans = check(high, low, array, key);
    return ans;
}

// Driver code
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int key;
    cin >> key;

   int ans= bs(n, array, key);
    cout<<ans;
}

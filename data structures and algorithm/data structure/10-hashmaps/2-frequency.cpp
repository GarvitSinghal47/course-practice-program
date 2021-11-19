#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int frequency(int array[], int size)
{
    int maxi=array[0];
    unordered_map<int, int> seen;
    for (int i = 0; i < size; i++)
    {
        //count here is used to check if the element is present before or not .
        if (seen.count(array[i]) > 0)
        {
            seen[array[i]]++;
            if(seen.count(array[i])>maxi)
            
            {
                maxi = seen[array[i]];
            }
        }
        seen[array[i]] = 1;
    }
    return maxi;
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
    int ans = frequency(array, n);
    cout << ans;
}
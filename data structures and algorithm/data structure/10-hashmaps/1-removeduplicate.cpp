# include<iostream>
#include<unordered_map>
# include<vector>
using namespace std;
vector<int> remove_duplicate(int array[],int size)
{
    vector<int> output;
    unordered_map<int, bool> seen;
    for (int i = 0; i < size; i++)
    {
        if (seen.count(array[i])>0)
        {
            continue;
        }
        seen[array[i]] = true;
        output.push_back(array[i]);
    }
    return output;
}
int main ()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    vector<int> ans = remove_duplicate(array, n);
    for(auto it:ans)
    {
        cout << it << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
//count function
// Parameters : The function accepts a mandatory parameter k which specifies the key to be searched in the map container.

//              Return Value : The function returns the number of times the key K is present in the map container.It returns 1 if the key is present in the container as the map only contains a unique key.It returns 0 if the key is not present in the map container.

vector<int>longestConsecutive(int n, int *array)
{
    vector<int> ans;
    unordered_map<int, bool> initial;
    for (int i = 0; i < n; i++)
    {
        initial[array[i]] = false;
    }
    int max = 0;
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        int x = array[i];
        int j = 0;
        
        // it will find if the  element whose difference between element is just 1 is present or not;
        //if we find any element less then our current elemnt than the loop will not run and goes on to the next element of the array.
        //as we will find only the start of the element that is smallest of the all element present among the required element.
        //this one step reduce the complexity of the code from n2 to n.
        if (initial.count(x - 1) > 0)
            continue;

        //here we are calculating the no of element greater han the array [i] element by increasing the value of x in each iteration
        while (initial.count(x) > 0)
        {

            j++;
            x++;
        }
        if (j > max)
        {
            max = j;
            start = array[i];
            //cout<<" j:"<<j<<" k:"<<k<<endl;
        }
    }
    //here the value of first array element that is required is pushed in the vector
    ans.push_back(start);
    for (int i = 0; i < max - 1; i++)
    {
        // here we are incresing the value of start accprding to the no of element present greater to the no required 
        start++;
    }
    //then after increasing it is pushed back
    ans.push_back(start);
    return ans;
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
    vector<int> ans = longestConsecutive(n, array);
    for (auto i : ans)
    {
        cout << i << " ";
    }
}
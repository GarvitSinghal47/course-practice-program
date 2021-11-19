#include <bits/stdc++.h>
using namespace std;
//count function
// Parameters : The function accepts a mandatory parameter k which specifies the key to be searched in the map container.

//              Return Value : The function returns the number of times the key K is present in the map container.It returns 1 if the key is present in the container as the map only contains a unique key.It returns 0 if the key is not present in the map container.

void printPairs(int *input, int n, int k)
{
    // Write your code here
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        //here as value we are storing the no of times the element has come in repetion to print it accoeding to it.
        m[input[i]]++;
    }

    if (k != 0)
    {
        for (int i = 0; i < n; i++)
        {

            if (m.count(input[i] - k) > 0)
            {
                // m[input[i]]--;
                int j = 0;
                //we will print th outpout to the no of times the key is present in the array of the input.
                while (j < m[input[i] - k])
                {
                if ((input[i] - k) < input[i])
                        cout << input[i] - k << " " << input[i] << endl;
                else
                 cout << input[i] << " " << input[i] - k << endl;

                    j++;
                }
            }
        }
    }
    else if (k == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (m.count(input[i]) > 0)
            {
                for (int j = 0; j < m[input[i]] - 1; j++)
                {
                    cout << input[i] << " " << input[i] << endl;
                }

                m[input[i]]--;
            }
        }
    }
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
    int k;
    cin >> k;
    for (int i = 0; i < n; i++)
    {

        cout << array[i] << " ";
    }
    cout << endl;
    printPairs(array, n, k);
}
#include <bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256

int main()
{
    string str;
    cin >> str;
    char max = 'a';
    // here an array is initialized with all its member element as 0.
    int count[NO_OF_CHARS] = {0};
    int i;
    for (i = 0; str[i]; i++)
    {
        count[str[i]]++;

        if (count[str[i]] > count[max])

        {
            cout << str[i] << ":" << count[str[i]] << endl;
            max = str[i];
        }
    }
    cout << max;
}
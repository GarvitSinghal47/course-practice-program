// C++ program for above approach
#include <bits/stdc++.h>
using namespace std;

string pairstar(string &s, string &output, int i = 0)
{

    output = output + s[i];
    if (i == s.length() - 1)
    {
    return s;
    }


    if (s[i] == s[i + 1])
        output = output + '*';

    pairstar(s, output, i + 1);
}

// Driver code
int main()
{
    string s;
    cin >> s;
    string output = " ";

    // Function call
    pairstar(s, output);

    cout << output << endl;

    return 0;
}

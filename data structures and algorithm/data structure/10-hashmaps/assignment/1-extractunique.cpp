#include <bits/stdc++.h>
using namespace std;

string uniqueChar(string str)
{
    set<char> rem;
    for (auto i : str)
    {
        rem.insert(i);
    }
    str = "";
    for (auto i : rem)
    {
        str += i;
    }
    return str;
}

int main()
{
    string s;
    cin >> s;
    cout << uniqueChar(s);
    return 0;
}
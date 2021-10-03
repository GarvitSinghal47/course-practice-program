#include <bits/stdc++.h>
#include<vector>
using namespace std;

void generate_allpossstrings(vector<string> &v, char *out, char *inp, int i, int j)
{
    if (inp[i] == '\0')
    {
        out[j] = '\0';
        string s;
        s = out;
        // we are pushing the whole string made in vector
        v.push_back(s);
       
        return;
    }
    //this will convet character no into no between 0-9
    int digit = inp[i] - '0';
    //it will tell the character for the correspnding digit or no 
    char ch = digit + 'a' - 1;
    out[j] = ch;

    if (inp[i + 1] != '0' && inp[i] != '0')
        generate_allpossstrings(v, out, inp, i + 1, j + 1);

    if (inp[i + 1] != '\0')
    {
        int seconddigit = inp[i + 1] - '0';
        int no = digit * 10 + seconddigit;
        if (no <= 26)
        {
            ch = no + 'a' - 1;
            out[j] = ch;
            if (inp[i] != '0')
                generate_allpossstrings(v, out, inp, i + 2, j + 1);
        }
    }
}
int main()
{
    char inp[100];
    char out[100];
    vector<string> v;
    cin >> inp;
    generate_allpossstrings(v, out, inp, 0, 0);
    cout << "[";
    auto it = v.begin();
    for (; it != v.end() - 1; it++)
    {
        cout << *it << ", ";
    }
    cout << *it;
    cout << "]";
    return 0;
}

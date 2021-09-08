
// C++ program to reverse a string
#include <bits/stdc++.h>
#include <string>
using namespace std;
string str2;

// Function to reverse words*/
void reverseWords(string s)
{

    // temporary vector to store all words
    vector<string> tmp;
    //here empty string str is created and all the member of string s is then pushed at the end of the string
    string str = "";
    for (int i = 0; i < s.length(); i++)
    {

        // Check if we encounter space
        // push word(str) to vector
        // and make str NULL
        if (s[i] == ' ')
        //if it get an " "tag it will then push the whole word to the string str
        {
            reverse(str.begin(), str.end());
            tmp.push_back(str);
            // this will add space in between the elemnts or each word
            str = " ";
        }

        // Else add character to
        // str to form current word
        else
            str += s[i];
    }

    // Last word remaining,add it to vector
    reverse(str.begin(), str.end());

    tmp.push_back(str);

    // Now print from last to first in vector or each string present in the vector from last to first word.
    int i;
    for (i = tmp.size() - 1; i >= 0; i--)
        cout << tmp[i] << " ";
}

// Driver Code
int main()
{
    string s;
    getline(cin, s);
    reverseWords(s);
    return 0;
}

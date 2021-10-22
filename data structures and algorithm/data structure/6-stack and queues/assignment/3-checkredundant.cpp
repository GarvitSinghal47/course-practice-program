
#include <bits/stdc++.h>
using namespace std;

bool checkRedundancy(string A)
{
    stack<char> st;
    for (char ch : A)
    {
        //it is the second step generally
        //when hit ) start popping out all character before it until it reaches (
        if (ch == ')')
        {
            int cnt = 0;
            while (!st.empty() and st.top() != '(')
            {
                cnt++;
                st.pop();
            }
            //it will remove the last bracket
            st.pop();
            //it will check if the no of characters after the pop is less than  2 that means there is a bracket or only one character which is not redundant.
            if (cnt < 2)
            {
                return true;
            }
        }
        else
        //it is the first step generally
        //it will first add all the character until it hit }
            st.push(ch);
    }

    return false;
}
int main()
{

    string input;
    cin >> input;

    if (checkRedundancy(input))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
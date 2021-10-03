#include <iostream>
using namespace std;

bool check(string input)
{
    //this will appply only when the input provided is null
    if (input.length() == 0)
    {
        return true;
    }

    // it will work when the length of the string or substring is one
    if ((input.length() == 1) && (input[0] == 'a' || 'b'))
    {
        return true;
    }

    if (input[0] == 'a')
    {
        if (input[1] == 'a')
        {
            if (input[2] == 'b' && input[3] == 'b')
            {
                bool ans = check(input.substr(4));
                return ans;
            }
            else if ((input.length() == 2) && (input[1] == 'a'))
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        else if (input[1] == 'b' && input[2] == 'b')
        {
            bool ans = check(input.substr(3));
            return ans;
        }
        else if ((input.length() == 2) && (input[1] == 'b'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

int main()
{
    string input;
    cin >> input;
    bool ans = check(input);
    cout << ans;
}
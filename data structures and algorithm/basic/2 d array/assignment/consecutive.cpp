#include <iostream>
#include <string>
using namespace std;
int main()
{
    // z is the location from to start checking ater updating the string
    // n is the no of time the character is coming
    // i is the iterator
    string str;
    int n = 0;
    int z = 0;
    int i;
    cout << "tell the string to remove  the consecutive";
    cin >> str;
    cout << str.length() << endl;

    for (i = 0; i < str.length(); i++)
    {

        if (str[i] == str[i + 1])
        {
            n++;
        }
        else if (str[i] != str[i + 1])
        {
            str.erase(z + 1, z + n);
            i = z + 1;
            z++;
            n = 0;
        }
// here last characer is finded to get the no of character of last element
        else if (i = str.length() - 1)
        {
            str.erase(z + 1, str.length());
        }
    }
    cout << str << endl;
    cout << str.length();
}

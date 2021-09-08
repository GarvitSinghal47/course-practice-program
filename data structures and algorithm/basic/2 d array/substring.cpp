#include <iostream>
#include <string>
using namespace std;
#include <algorithm>

void substring(string str)
{
    for (int z = 0; z < str.length(); z++)
    {
      
    //as the letter from the iniial position get removed we have to now decrease thr iteration of the loop that is why z is minused.
    // as per iteration the no of character in the string are decreasing.

        for (int i = 1; i <= str.length()-z; i++)
        {
            cout << str.substr(z, i) << endl;
        }
        cout<<endl;
    }
}
int main()
{
    string str;
    cout << "tell the string";
    getline(cin, str);

    substring(str);
}
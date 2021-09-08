#include <algorithm>
#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str;
    char alpha;
    cout << "tell the string";
    cin >> str;
    cout << "tell the element you want to remove";
    cin >> alpha;

    // here string erase is used which take 2 argument starting point and end point.starting point is taken as removeand end point is taken as string end.

    // then remove is used which remove the letter we want to remove in the string.

    str.erase(remove(
                  str.begin(), str.end(), alpha),
              str.end());

    // remove(str.begin(), str.end(), alpha);
    // if directly above function is used then it would remove the all occurence of the character except at the end,so erase function is used to also remove the character if it is present at end.

    cout << str;
}
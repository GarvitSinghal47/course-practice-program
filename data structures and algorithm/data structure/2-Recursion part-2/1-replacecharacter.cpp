#include <iostream>
using namespace std;

string replaceChar(char input[], char change, char changewith)
{
    if (input[0] == '\0')
    {
        return input;
    }
    if (input[0]==change)
    {
        input[0]=changewith;
        return replaceChar(input+1,change,changewith);
    }
    if(input[0]!=change)
    {
        return  replaceChar(input+1,change,changewith);
    }
    return input;
}
int main()
{
    char input[1000000];
    char change, changewith;
    cin >> input;
    cin >> change >> changewith;

    replaceChar(input, change, changewith);
    cout << input << endl;
}
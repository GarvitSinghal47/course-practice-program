#include <iostream>
#include <string.h>
using namespace std;

void check(char rev[],char source[])
{
    // here * is used to  access or check the data inside the string, if * is not used then it will check only the address of two (address of rev, source).* will help to go inside the location and check for the equality of the string and not the address.
    if  (*rev==*source)
    {
        cout<<"palindrome";

    }
    else{
        cout<<"Not a palindrome";
    }
}

int main()
{
    int n;
    cin >> n;
    char source[n];
    cin >> source;
    cout << source << endl;
    char rev[n];
    rev[n] = '\0';
    strncpy(rev, source, n);

    for (int i = 0; i < n - 1 - i; i++)
    {
        swap(source[i], source[n - i - 1]);
    }

    check(rev,source);
   
}
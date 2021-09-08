#include <iostream>
using namespace std;
int main ()
{
    //" " sign are used to declare a string
    char s[]="hello";
    cout<<s<<endl;

    char q[]={'h','e','l','l','o','\0'};
    cout<<q<<endl;

    //this will allocate the string in heap
    char *r="hello";
    cout<<r;
return 0;
}
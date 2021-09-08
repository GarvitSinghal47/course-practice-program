#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    char s1[]="hello";
    char s2[]="world";

    strcat(s1,s2);
    cout<<s1<<endl;


    char q1[]="good";
    char q2[]="evening";

    strncat(q1,q2,2);
    cout<<q1<<endl;

return 0;
}
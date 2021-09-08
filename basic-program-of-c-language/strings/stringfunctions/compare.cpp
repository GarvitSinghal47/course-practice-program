#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    char s1[]="hello";
    char s2[]="hello";
    cout<<strcmp(s1,s2)<<endl;

    char q1[]="Hello";
    char q2[]="hello";
    cout<<strcmp(q1,q2)<<endl;

    char r1[]="minor";
    char r2[]="hello";
    
    cout<<strcmp(r1,r2)<<endl;
    


}
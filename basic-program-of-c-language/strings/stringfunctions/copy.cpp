#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    char s1[]="good";
    char s2[]="";
    strcpy(s2,s1);
    cout<<s2<<endl;




    char q1[]="hello";

    /*here array size is defined otherwise it will read " " as only one 
    char string */
    char q2[10]="";
    strncpy(q2,q1,2);
    cout<<q2<<endl;

return 0;


}

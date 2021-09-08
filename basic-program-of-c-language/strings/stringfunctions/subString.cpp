#include <iostream>
#include <cstring>
 using namespace std;
int main()
{
    char s1[]="programming";
    char s2[]="gram";
    cout<<strstr(s1,s2)<<endl;;

    char q1[]="programming";
    char q2[]="aman";
    if(strstr(q1,q2)!=NULL)
    cout<< strstr(q1,q2)<<endl;

    else
    cout<<"not found";

    return 0;


}
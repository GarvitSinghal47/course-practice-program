//functions at,=,+
#include <iostream>
#include<string>
using namespace std;
int main ()
{
    string str="programming";
    cout<<str.at(4)<<endl;
    cout<<str[4]<<endl;

    string str1="program";
    string str2="ing";
    str1=str1+str2;
    cout<<str1<<endl;

    return 0;


}
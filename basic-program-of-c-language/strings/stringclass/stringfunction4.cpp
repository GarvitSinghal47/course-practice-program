//functions substrimg,compare

#include<iostream>

#include<string>
using namespace std;
int main ()
{
    string str="programming";
    cout<<str.substr(3)<<endl;
    cout<<str.substr(3,4)<<endl;

    string str1="programming";
    string str2="Programming";

    cout<<str1.compare(str2);



    

}
//functions append,insert
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="hello";
 // append used to join 2 strings
    str.append( "world");
    cout<<str<<endl;

/* 3 here is the location where to add letters and kk
 is the letter to be added*/
    str.insert(3,"KK");
    cout<<str<<endl;

return 0;


}
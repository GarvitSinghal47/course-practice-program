#include <Iostream>
#include<string>
using namespace std;
int main ()
{
    int count=0;
    string str="hello";
    string::iterator it;
    for(it=str.begin();it!=str.end();it++)
    {
     
     count++;
        
    }
    cout<< count<<endl;

    //            or              //





    int counter=0;
    string s="welcome";

        
    for(int i=0;s[i]!='\0';i++)
    {
     
     counter++;
        
    }
    cout<< counter<<endl;





return 0 ;

}





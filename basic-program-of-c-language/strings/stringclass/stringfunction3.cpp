#include <iostream>
#include<string>
using namespace std;
int main ()
{
    string s="welcome";

    char str[10];
     
     s.copy(str,s.length());
     str[3]='\0';
     cout<<str<<endl;

     cout<<s.find("l")<<endl;
     cout<<s.rfind("l")<<endl;
     cout<<s.max_size()<<endl;
     cout<<s.find_first_of("l")<<endl;
     cout<<s.find_first_of('l',2)<<endl;
     cout<<s.find_last_of("l")<<endl;





}
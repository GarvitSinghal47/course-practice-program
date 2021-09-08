//functioms replace,erase,push back,pop back,swap
#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string str="programming";
      str.replace(3,5,"kk");
     cout<<str<<endl;

    str.push_back('z');
         cout<<str<<endl;

    str.pop_back();
         cout<<str<<endl;

    string str1="programming";
    string str2="program";

    str1.swap(str2);
    cout<<str1<<endl;

    return 0;
}




    
    




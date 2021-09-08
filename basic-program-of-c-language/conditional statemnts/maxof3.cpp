#include <iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cout<< "enter a,b,c";
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout << "a is greater";
    }
    else
        if (b>c)
        {
        cout<<"b is greter";
        }
        else 
       { 
        cout<<"c is greater";
        }
    return 0;    

}
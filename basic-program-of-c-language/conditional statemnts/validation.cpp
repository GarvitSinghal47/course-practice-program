#include <iostream>
using namespace std;
int main ()
{
    float a,b,c;
    cout<<"enter two no.s"<<endl;
    cin>>a>>b;
    if (b==0)
    {
        cout<<"invalid denominator"<<endl;

    }
    else 
    {
        c=a/b;
        cout<<c<<endl;

    }
    return 0;

}
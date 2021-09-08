#include <iostream>
using namespace std;
int main ()
{
    int a[5]={2,3,4,5,6};
    int *p=a,*q=&a[3];

    cout<<*p<<endl;


    cout<<q<<endl;
    cout<<*q<<endl;


    p++;
    cout<<*p<<endl;

    p--;
    cout<<*p<<endl;

    cout<<p<<endl;
    cout<<p+2<<endl;


    cout<<*p<<endl;
    cout<<*p+2<<endl;


    cout<<p-q<<endl;


}
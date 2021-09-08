#include <iostream>
using namespace std;
int main ()
{
    float billamount;
    float discount=0.0;
    cout<<"enter biil amount";
    cin>>billamount;
    if (billamount>=500)
    discount= billamount*20/100; 
    else if( billamount>100 && billamount<500)
    discount= billamount*10/100;

    cout<<"bill amount is"<<billamount<<endl;
    cout<<"discount is"<<discount<<endl;
    cout<< "discounted amount"<< billamount-discount<<endl;
     return 0;
}

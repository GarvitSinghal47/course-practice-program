#include <iostream>
using namespace std;
int main ()
{
    int i=5,j;
    j=i++;
cout<<j<<" "<<i<<endl;
    int k=8,m;
    m=k++;
cout<<m<<" "<<k<<endl;
    int a=9,b;
    b=2*a++ + 2*++a;
cout<<b<<" "<<a<<endl;
 return 0;
}
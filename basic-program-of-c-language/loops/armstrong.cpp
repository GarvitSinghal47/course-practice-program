#include<iostream>
#include <cmath>
using namespace std;
int main ()
{
    int n,i,a,sum=0,m;
    cout<<"tell the no"<<endl;
    cin>>n;
    m=n;
    while(n>0)
    {
       a=n%10;
       n=n/10;
       sum+=pow(a,3);
       
    }
        if (sum==m)      
        {
        cout<<"the no is armstrong";

         }
        else
        cout<<"the no is not armstrong";
return 0;

}
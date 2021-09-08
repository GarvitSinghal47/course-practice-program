#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"tell the nos "<<endl;
    cin>>m>>n;
    while(m!=n)
    {
    if(m>n)
    {
     m=m-n;
    }
    else if (m<n)
   {
     n=n-m;
   }
    }
   cout<<"the common no is\n"<<m<<endl;
   return 0;
}
#include <iostream>
using namespace std;
int main ()
{
    int i,n,sum=0;
    cout<<"tell the n"<<endl;
    cin>>n;
    for (i=1;i<=n;i++)
    {

    if (n%i==0)
      {
             sum+=i;           
      }
               
    }
                if(sum==2*n)
                {cout<< "sum is a perfect square\n";}
                else 
                { cout<<"not a perfect square"<<endl;}

return 0;
}
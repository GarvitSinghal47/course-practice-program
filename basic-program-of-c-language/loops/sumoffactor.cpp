#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"tell the value for which you want to find n ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
        
    }
    cout<<"sum"<<sum;
    return 0;
}
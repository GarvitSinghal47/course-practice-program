#include <iostream>
using namespace std;
int main ()
{
    int i,n,sum=0;
    cout<<"enter n";
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"the sum of no is"<<sum<<endl;
    return 0;
} 
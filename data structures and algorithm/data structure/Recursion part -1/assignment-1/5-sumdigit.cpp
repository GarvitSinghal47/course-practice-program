#include<iostream>
using namespace std;
int fun(int N)
{
    if(N==0)
    {
        return 0;
    }
    return (N % 10 + fun(N/ 10));
    
}

int main()
{
    int N;
    cin>>N;
    cout<<fun(N)<<endl;
}
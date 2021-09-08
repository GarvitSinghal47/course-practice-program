#include <iostream>
using namespace std;
int main()
{
    int mid,key,l=0,h=9;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"tell the no you want to find";
    cin>>key;
    
    while(l<=h)
    {
        mid=(l+h)/2;
    if(key==a[mid])
        {
            cout<<"found"<<mid;
            return 0;
        }
    else if (key<a[mid])
        h=mid-1;

    else if (key>a[mid])
        l=mid+1;
    }
    cout<<"not found";
    return 0;
}



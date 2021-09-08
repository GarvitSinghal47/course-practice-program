
#include <iostream>
using namespace std;
int main()
{    
    int max;
    int a[]={5,4,7,8,2,9};
    max=a[1];

    for (int i=0;i<6;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    cout<<"max is"<<max<<endl;
    return 0;
    
    
    
}
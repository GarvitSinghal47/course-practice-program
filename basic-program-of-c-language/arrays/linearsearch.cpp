#include<iostream>
using namespace std;
int main()
{
    int n,i,key,counter;
    
    cout<<"tell the noof element";
    cin>>n;
    int a[n];
    cout<<"tell the elements";
      
    for(i=1;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the no ";
    cin>>key;
    for(i=0;i<n;i++)
     if (key==a[i])
     {
       cout<<"found"<<i;
       return 0; 
     }
     cout<<"not found";
     return 0;

}
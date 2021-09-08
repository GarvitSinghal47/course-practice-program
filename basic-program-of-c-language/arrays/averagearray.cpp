#include<iostream>
using namespace std;
int main()
{
    int i,n;
    float num[100],sum=0.0,average;
    cout<<"enter the no of elements";
    cin>>n;
    for(i=0;i<n;i++)
      {
          cout<<i+1<<"enter the no.s";
          cin>>num[i];
          sum+=num[i];

      }
      average=sum/n;
      cout<<average; 
      return 0;

}
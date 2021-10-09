#include <bits/stdc++.h>
using namespace std;

int intersection(int arr1[],int arr2[],int n,int m)
{
    int i=0,j=0;
    for (int z = 0; z <n+m; z++)
    {
        if(arr1[i]!=arr2[j])
        {
            arr1[i]>arr2[j]?j++:i++;
        }
        if(arr1[i]==arr2[j])
        {
        
            return arr1[j];
        }
    }
    
    
    

}



int main()
{
    int n,m;
    cin>>n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    
    cin>>m;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin>>arr2[i];
    }
     for (int i = 0; i < n; i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
  int ans=  intersection(arr1,arr2,n,m);
    cout<<ans;
}
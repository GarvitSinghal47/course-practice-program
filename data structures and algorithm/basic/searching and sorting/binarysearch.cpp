# include <iostream>
using namespace std;

int binary(int n,int array[],int key)
{
    int mid,last,first;
    first=0;
    last=n-1;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(array[mid]==key)
        {
            return mid;
        }
        else if(array[mid]>key)
        {
            last=mid-1;

        }
        else if(array[mid]<key)
        {
            first=mid+1;
            
        }
    }
    return -1;
}


int main()
{
   int n;
    cout<<"tell the value of no of elements,elements,key";
    cin>>n;
    int input[100];
    for(int i=0;i<n;i++)
    {   
        cin>>input[i];
    }
    int z;
    cin>>z;
    cout<<binary(n,input,z)<<endl;
    
   return 0;
}
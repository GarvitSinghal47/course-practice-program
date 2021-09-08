# include <iostream>
using namespace std;
void zero(int array[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
       { if(array[i]!=0)
        {   
                array[count++] = array[i];
        }
       }

       while (count < n)
        array[count++] = 0;

    
}


int main()
{   int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    
    zero(array,n);
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    
    return 0;
}
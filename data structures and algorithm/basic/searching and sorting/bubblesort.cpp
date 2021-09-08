#include <iostream>
using namespace std;

void sort(int n, int array[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp;
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main()
{   int n;
    cin>>n;
    int input[100];
    for (int j=0;j<n;j++)
    {
        cin>>input[j];
    }
    for (int j=0;j<n;j++)
    {
       cout<<input[j]<<" ";
    }
    cout<<endl;


    sort(n,input);

      for (int j=0;j<n;j++)
    {
       cout<<input[j]<<" ";
    }


}

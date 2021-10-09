#include <iostream>
using namespace std;

void duplicateelement(int N, int array[])
{
    int sum=array[0];
    
    for (int i = 1; i < N; i++)
    {
        sum+=array[i];

        
    }
    int fsum=((N)*(N-1))/2;
    cout<<sum-fsum;
}
int main()
{
    int N; 
    cin >> N;
    int array[N];
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < N; i++)
    {
        cout << array[i] << " ";
    }
    cout<<endl;
   duplicateelement(N, array);
    
}
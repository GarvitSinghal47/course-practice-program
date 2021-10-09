#include <iostream>
using namespace std;
//here we use ^ xor operator which gives zero when to same element are xor so at lest we remain with the element that has no copy present of it in the array;
void uniqueelement(int N, int array[])
{
    int Xor=array[0];
    
    for (int i = 1; i < N; i++)
    {
        Xor^=array[i];

        
    }
    cout<<Xor;
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
     uniqueelement(N, array);
    
}
#include <iostream>
using namespace std;
int  fun(int n, int array[], int key,int i)
{
    
    if (n == 0)
    {
        return -1;

    }
    if (array[0]==key)
    {
        return i;
    }
    else{
        i++;
        return fun(n-1,array+1,key,i);
    }
}

int main()
{   int i=0;
    int n;
    cin >> n;
    int *p = new int[n];
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }

    cout << "tell the key " ;
    cin >> x;
    int ans = fun(n, p, x,i);
    cout<<ans<<endl;
}

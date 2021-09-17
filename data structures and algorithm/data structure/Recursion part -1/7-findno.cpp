#include <iostream>
using namespace std;
bool fun(int n, int array[], int key)
{
    if (n == 0)
    {
        return false;

    }
    if (array[0]==key)
    {
        return true;
    }
    else{
        return fun(n-1,array+1,key);
    }
}

int main()
{
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
    bool ans = fun(n, p, x);
    cout<<ans<<endl;
}

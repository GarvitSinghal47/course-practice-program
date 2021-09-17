#include <iostream>
using namespace std;

int xpow(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        int smalloutput = x * xpow(x, n - 1);
        // output will be send back only after it has gone throw the all call stack of function.
        return smalloutput;
    }
}

int main()
{
    int x;
    int n = 0;
    cin >> x;
    cin >> n;

  int output=  xpow(x, n);
    cout <<  output<< endl;
}
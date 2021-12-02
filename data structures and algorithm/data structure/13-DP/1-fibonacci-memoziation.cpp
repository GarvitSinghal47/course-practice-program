#include <iostream>
using namespace std;

//fibonacci helper function is used to prevent creation of new array for each recursive call.
int fibonacci_helper(int n, int ans[])
{
    if (n <= 1)
    { //in case of 0 it will return 0 and for 1 it will return 1.
        return n;
    }

    //check if the output already exists or not 
    if (ans[n] != -1)
    {
        return ans[n];
    }

    int a = fibonacci_helper(n - 1, ans);
    int b = fibonacci_helper(n - 2, ans);

    //save the output for future use
  ans[n]=  a + b;

  //return the final output
  return ans[n];
}
int fibonacci(int n)
{
    int *ans = new int[n + 1];
    for (int i = 0; i <= n; i++)
    {
        ans[i] = -1;
    }

    return fibonacci_helper(n, ans);
}
int main()
{
    int n;
    cin >> n;
    int ans = fibonacci(n);
    cout << ans;
}
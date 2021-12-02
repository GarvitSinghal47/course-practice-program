//the time complexity for dp and memoziation is same(o(n))but the space complexity for dp is less  than that of the memoziaton
#include <iostream>
using namespace std;
int fibonacci_helper(int n, int ans[])
{
    ans[0] = 0;
    ans[1] = 1;

    for (int i = 2; i <=n; i++)
    {
        ans[i] = ans[i - 1] + ans[i - 2];
    }
    

  

    //return the final output
    return ans[n];
}
int fibonacci(int n)
{
    int *ans = new int[n + 1];
   

    return fibonacci_helper(n, ans);
}
int main()
{
    int n;
    cin >> n;
    int ans = fibonacci(n);
    cout << ans;
}
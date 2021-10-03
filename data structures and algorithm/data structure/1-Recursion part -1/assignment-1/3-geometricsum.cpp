#include <iostream>
#include <cmath>
using namespace std;

float geometricSum(int k)
{
  // base case
    if (k == 0)
        return 1;
 
    // calculate the sum each time
    double ans = 1 / (double)pow(2, k) + geometricSum(k- 1);
 
    // return final answer
    return ans;
}


int main()
{
    int k;
    cin >> k;
    cout << geometricSum(k) << endl;
}
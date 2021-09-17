#include <bits/stdc++.h>
using namespace std;

int fun(int N)
{
  if (N == 0)
  {
    return 0;
  }
  else{
    N=N/10;
  }
  int ans= fun(N);
  if (N%10==0)
  {
     ans++;
     
  }
  else{
    ans;
  }
  return ans;
}
int main()
{
  int N;
  cin >> N;
  cout << fun(N) << endl;
}
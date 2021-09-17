#include <iostream>

using namespace std;

int lastIndex(int input[], int size, int x)
{
    /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */

    //call stack start

    if (size == 0)
        return -1;

    //below part is to check the last index  if  it is the key we are looking for or not
    if (size == 1)
    {
        if (input[0] == x)
            return 0;
        else
            return -1;
    }
    int ans = lastIndex(input + 1, size - 1, x);
    //call stack formation end

    //function start

    if (ans == -1)
    {
        if (input[0] == x)
            return 0;
        else
            return -1;
    }
    //when we get the answer we want it just keep on increasing it in backward send call stack with increasing its index
    else
        return ans + 1;
}

int main()
{
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    int x;

    cin >> x;

    cout << lastIndex(input, n, x) << endl;
}
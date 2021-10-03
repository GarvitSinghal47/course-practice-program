#include <iostream>
using namespace std;
int fun(int array[], int N)
{

    if (N == 0)
    {
        return 0;
        // it will return 0 to the function call of (1-1)and also end the function loop as after it n becomes less than 0 for which function is not valid.
    }
    if (N != 0)
    {
        int sum = array[N - 1] + fun(array, N - 1);
        return sum;
    }
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
    int ans = fun(array, N);
    cout << ans << endl;
}
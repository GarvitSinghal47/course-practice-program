#include <bits/stdc++.h>
using namespace std;
string solve(int n, int x, int y)
{
    // To store results
    //here n size is taken as there is also one case of minusing 1 which will be done n times.
    int dp[n + 1];

    // Initial values
    dp[0] = false;
    dp[1] = true;

    // Computing other values.
    for (int i = 2; i <= n; i++)
    {

        // If A losses any of i-1 or i-x
        // or i-y game then he will
        // definitely win game i
        //it will check after minus the number remain is smaller or 0 and also check if next part exist or not if it does not exist it will return;
        if (i - 1 >= 0 and !dp[i - 1])
            dp[i] = true;
        else if (i - x >= 0 and !dp[i - x])
            dp[i] = true;
        else if (i - y >= 0 and !dp[i - y])
            dp[i] = true;

        // Else A loses game.
        //if the answerwe are getting is less than the solution or the size then this mean this individual cannot win the game and a false will be stored for him;
        else
            dp[i] = false;
    }

    // If dp[n] is true then A will
    // game otherwise  he losses
    string s = "Whis";
    if (dp[n])
    {
        s = "Beerus";
        return s;
    }
    else
        return s;
}

int main()
{

    int n;
    cin >> n;
    int array[n];
    int x;
    cin >> x;
    int y;
    cin >> y;

    string ans = solve(n, x, y);

    cout << ans;
}
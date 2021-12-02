#include <iostream>
using namespace std;
//dp
int countWaysToMakeChange(int S[], int m, int n)
{

    int i, j, x, y;

    // We need n+1 rows as the table
    // is constructed in bottom up
    // manner using the base case 0
    // value case (n = 0)
    // here n represent the sum on the x axis of chart
    // and m represent the size of the array in which the element has been added.
    int table[n + 1][m];

    // Fill the enteries for 0
    // value case (n = 0)
    for (i = 0; i < m; i++)
        table[0][i] = 1;

    // Fill rest of the table entries
    // in bottom up manner
    for (i = 1; i < n + 1; i++)
    {
        for (j = 0; j < m; j++)
        {
            // Count of solutions including S[j]
            x = (i - S[j] >= 0) ? table[i - S[j]][j] : 0;

            // Count of solutions excluding S[j]
            y = (j >= 1) ? table[i][j - 1] : 0;

            // total count
            //it will store the total no of the answer given by both the tree one that is including it and the one that was not including it and then the sum is stored in the table at that index..
            table[i][j] = x + y;
        }
    }
    return table[n][m - 1];
}

/*int helper(vector<vector <int> > &dp,int c[],int n,int v){
    if(v<0)
        return 0;
    if(v==0)
        return 1;
    if(n==0)
        return 0;
    ///alredy present
    if(dp[n][v]!=0)
        return dp[n][v];
    
    //Either include nth coin or don't include
    int ans=helper(dp,c,n,v-c[n-1])+helper(dp,c,n-1,v);
    dp[n][v]=ans;
    return ans;
}
int countWaysToMakeChange(int denominations[], int numDenominations, int value){

  /*  Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
   
    
    //This problem is of 0-1 knapsack kind. 
    
    
    vector <vector <int> > dp(numDenominations+1,vector<int>(value+1,0));
    int ans=helper(dp,denominations,numDenominations,value);
    
    return ans;

}
*/

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    int denom;
    cin >> denom;

    cout << endl;
    int ans = countWaysToMakeChange(array, n, denom);
    cout << ans;
}
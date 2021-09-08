#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "\nInput the number of rows : ";
    cin >> m;
    cout << "\nInput the number of columns : ";
    cin >> n;
    int arr[m][n];
    int i, j;
    cout << "\nInput the matrix \n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "\nThe Matrix is \n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nSpiral Matrix : ";
    // in  this the thing tht was kept constant during printing is the incremented after the for loop
    int k = 0, l = 0;
    while (k < m && l < n)
    {
        for (i = l; i < n; i++)
        {
            // here row is keping constant and then each element of that row is printed
            cout << arr[k][i] << " ";
        }
        // next step is done to shift row to next line and to print the last column in downward manner
        k++;
        for (i = k; i < m; i++)
        {
            cout << arr[i][n - 1] << " ";
        }
        n--;
        if (k < m)
        {
            for (i = n - 1; i > 0; i--)
            {
                cout << arr[m - 1][i] << " ";
            }
            m--;
        }
        if (l < n)
        {
            for (i = m - 1; i >= k; i--)
            {
                cout << arr[i][l] << " ";
            }
            l++;
        }
    }
    cout << endl;
    return 0;
}

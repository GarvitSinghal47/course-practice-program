#include <iostream>
using namespace std;

int main()
{
    int t, n, m;

    cout << "tell the no of testcases";
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cout << "tell the no of rows and column";
        cin >> n >> m;
        cout << "you have to enter-" << n * m << " elements" << endl;
        ;
        int array[n][m];
        cout << "tell the element of the array" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> array[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << array[i][j] << " ";
            }
            cout << endl;
        }
        cout << "wave print";
        for (int i = 0; i <m; i++)
        {
            //this below function is writed to check whether the vcolumn no is  even or odd if it is even  go downward in the column and if it is odd go upward in the column to print .


            // below after":"the part is else and after ? is what to do if  condition is true or satisfied
            int j = i % 2 == 0 ? 0 : n - 1;

            // printing of elemnt of each column is done according to the no of rows
            while (i % 2 == 0 ? j < n : j >= 0)
            {
                cout << array[j][i] << " ";
                i % 2 == 0 ? j++ : j--;
            }
        }
        cout<<endl;
    }
}

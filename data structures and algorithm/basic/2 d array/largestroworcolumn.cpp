#include <iostream>
using namespace std;

void sum(int array[][50], int n, int m, int t)
{
     int z,q;
    int rowsum=0, columnsum=0,rowlargest=0,columnlargest=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            rowsum=array[i][j]+rowsum;
            if(rowsum>rowlargest)
            {
                rowlargest=rowsum;
                 z=n;
            }
        }
    rowsum=0;
    }
     for (int j = 0; j < m; j++)
    {
        for (int i = 0; i< n; i++)
        {
            columnsum=array[i][j]+columnsum;
            if(columnsum>columnlargest)
            {
                columnlargest=columnsum;
                 q=m;
            }
        }
        columnsum=0;
    }

    if(columnlargest>rowlargest)
    {
        cout<<"column is lagest:"<<columnlargest<<"  "<<q;
    }
    else if(columnlargest<rowlargest)
    {
        cout<<"row is largest:"<<rowlargest<<"  "<<z;
    }
    else if(columnlargest==rowlargest)
    {
        cout<<"largest for column and row is same:"<<columnlargest;
    }
  cout<<endl;
}

int main()
{
    int t;
    int n, m;

    cout << "tell the no of testcases";
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        cout << "tell the value of rows amd column ";
        cin >> n >> m;
        int array[n][50];
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
        sum(array, n, m, t);
        
    }
}

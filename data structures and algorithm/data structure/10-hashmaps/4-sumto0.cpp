#include<iostream>
using namespace std;
#include <map>
void PairSum(int *input, int n) {	 

    map<int,int> m;

    for(int i=0 ;i<n ;i++)
        m[input[i]]++;

    for(int i=0 ;i<n ;i++)
    {
        if(m[-input[i]]>0)
        {
            //it is for the no of times the same no comes;
            int  x= m[-input[i]];
            while(x>0)
            {if(input[i] > -input[i])
                cout << -input[i] << " "<< input[i] <<endl;
             else
                 cout << input[i] << " "<< -input[i] <<endl;
             x--; }

            m[input[i]]--;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
 PairSum(array, n);
   
}


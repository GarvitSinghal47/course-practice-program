// C++ linear time solution for stock span problem
#include <iostream>
#include <stack>
using namespace std;
int *stockSpan(int price[], int size)
{
    
    int output[size];
    //stack s is used to save the indices of the element
    stack<int> s;

    output[0] = 1;
    //index of the first element is pushed inside the stack
    s.push(0);
    for (int i = 1; i < size; i++)
    {
        if (price[i] < price[s.top()])
        {
            s.push(i);
            output[i] = 1;
        }
        else
        {
            while (s.top() != NULL && price[i] > price[s.top()])
            {
                s.pop();
            }
            if (s.top() == NULL)
                output[i] = i + 1;
            else
                output[i] = i - s.top();

            s.push(i);
        }
    }
    for (int i = 0; i < size; i++)
    {
        price[i] = output[i];
    }
    return price;
}


// Driver program to test above function
int main()
{
    int price[] = {10, 4, 5, 90, 120, 80};
    int n = sizeof(price) / sizeof(price[0]);
    

    // Fill the span values in array S[]
    stockSpan(price, n);

    // print the calculated span values
    for (int i = 0; i < n; i++)
        cout << price[i] << " ";

    return 0;
}

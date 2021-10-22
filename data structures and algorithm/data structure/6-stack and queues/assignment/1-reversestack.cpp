# include<iostream>
# include<stack>
using namespace std;
void reverseStack(stack<int> &s1, stack<int> &s2)
{
    
    int x;
    while (!s1.empty())
    {
        x = s1.top();
        s2.push(x);
        s1.pop();
    }
    s1 = s2;
    
}
int main()
{
    stack<int> s1;
    stack<int> s2;
    int n,input;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        s1.push(input);

    }
    reverseStack(s1, s2);
    while (!s1.empty())
    {
       cout<< s1.top()<<" ";
       s1.pop();
    }
    
}
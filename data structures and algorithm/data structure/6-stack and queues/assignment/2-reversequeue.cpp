#include <iostream>
#include <queue>
using namespace std;
#include <queue>

void reverseQueue(queue<int> &q)
{

    if (q.size() <= 0)
        return;

    int x = q.front();
    q.pop();
    reverseQueue(q);

    q.push(x);
}
int main()
{
    queue<int> s1;

    int n, input;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        s1.push(input);
    }
    reverseQueue(s1);
    while (!s1.empty())
    {
        cout << s1.front() << " ";
        s1.pop();
    }
}
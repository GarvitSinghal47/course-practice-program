# include <iostream>
using namespace std;

class stackoverflow:exception{};
class
stackunderflow:exception{};

class stack
{
    private:
    int *stk;
    int top=-1;
    int size;

    public:
    stack(int sz)
    {
        size=sz;
        stk=new int[size];
    }
    void push(int x)
{
if(top==size-1)
throw stackoverflow();
top++;
stk[top]=x;
}
int pop()
{
if(top==-1)
throw stackunderflow();
return stk[top--];
}
};
int main()
{
stack s(5);
s.push(2);
s.push(3);
s.push(4);
s.push(10);
s.push(9);
s.push(8);
}
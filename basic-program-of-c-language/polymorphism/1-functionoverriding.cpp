#include <iostream>
using namespace std;
class base
{
public:
    void fun()
    {
        cout << "function of base";
    }
};

class derived : public base

{
public:
    void fun()
    {
        cout << "functin of derived class";
    }
};

int main()
{
    derived d;
    d.fun();
}
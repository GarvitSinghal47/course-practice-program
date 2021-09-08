#include <iostream>
using namespace std;

class base
{
public:
    virtual void fun1() = 0;
    virtual void fun2() = 0;
};

class derived : public base
{
public:
    void fun1()
    {
        cout << "fun1 of Derived" << endl;
    }
    void fun2()
    {
        cout << "fun2 of Derived" << endl;
    }
};

int main()
{
    derived d;
    d.fun1();
    d.fun2();
}
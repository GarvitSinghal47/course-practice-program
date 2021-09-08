class Base
{
private: int a;
protected: int b;
public: int c;
void funBase()
{
a=10;
b=5;
c=15;
}
};
class Derived:public Base
{
public:
void funDerived()
{
// derived class cannot access private member of base class
// a=10;
b=5;
c=15;
}
};
int main()
{
Base b;
// int main cannot access protected and private member of base class
// b.a=10;
// b.b=5;
b.c=20;
}
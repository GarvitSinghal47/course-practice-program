#include<iostream>
using namespace std;

// example 1
class Base
{
public:
    void fun1()
{
cout<<"fun1 of Base"<<endl;
}
};

class Derived:public Base
{
public:
	void fun1()
	{
		cout<<"fun2 of derived"<<endl;
	}
};




int main ()
{
Derived d;
	Base *ptr=&d;
	ptr->fun1();
	
	return 0;

}
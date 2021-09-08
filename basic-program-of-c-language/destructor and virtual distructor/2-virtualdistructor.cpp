# include<iostream>
using namespace std;
    
/*program for  virtual destructor

*/


//virtal destructor is used to destruct classes in backward order or from the child to parent.
//if virtal is not used then it will only destuct the main or parent class not child class.

class base
{
public:
virtual ~base()
	{
		cout<<"destructor of base"<<endl;
	}
};
class derived:public base
{
public:
	~derived()
	{
		cout<<"destructor of derived"<<endl;
	}
};
void fun()
{
	base *p=new derived();
	delete p;
}
int main()
{
	fun();
}

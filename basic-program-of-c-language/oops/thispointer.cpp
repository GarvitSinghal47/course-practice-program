#include <iostream>
using namespace std;
class rectangle
{
private:
	int length;
	int breadth;
public:
	rectangle(int length,int breadth)
	{
        /*this is refering to the length in private and
        same d=for breadth*/
		this->length=length;
		this->breadth=breadth;
	}
	int area()
	{
		return length*breadth;
	}
};
int main()
{
	rectangle r1(10,5);
	cout<<r1.area()<<endl;
}
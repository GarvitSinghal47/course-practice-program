# include<iostream>
using namespace std;
    
/*program for demo#2-base class pointer derived class object

*/
class rectangle
{
public:
	void area()
	{
		cout<<"area of rectangle"<<endl;
	}
};
class cuboid:public rectangle
{
public:
	void volume()
	{
		cout<<"cuboid volume"<<endl;
	}
}; 
int main()
{
	cuboid c;
	rectangle *p=&c;
	cuboid c1 ;
	c1.area();
	c1.volume();
	p->area();
	      
	return 0;
}
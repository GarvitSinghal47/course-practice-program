#include <iostream>
using namespace std;
class rectangle
{
    public:
    int length;
    int breadth;

    int area()
    {return  length*breadth; }

    int perimeter()
    {   return  2*(length+breadth);  }
};


int main()
{
    rectangle *p;
    p=new rectangle();
    p->length=10;
    p->breadth=20;
    cout<<p->area()<<endl;
}
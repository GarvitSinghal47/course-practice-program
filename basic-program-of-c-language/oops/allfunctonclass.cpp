#include <iostream>
using namespace std;
 
 class rectangle
{
private:
int length;
int breadth;

public:
rectangle();
rectangle(int l,int b);
rectangle(rectangle &r);
int getlength(){return length;};
int getbreadth(){return breadth;};
void setlength(int l);
void setbreadth(int b);
int area();
int perimeter();
bool issquare();
~rectangle();
};

int main()
{
    rectangle r1(10,10);
    cout<<"area is "<<r1.area()<<endl;
    if(r1.issquare())
    {cout<<"yes\n";}

}

/*this is the default case in which when a empty 
rectangle is created it was created with length 1,
breath b=1, and not of a garbage value*/ 
rectangle::rectangle()
{
    length=1;
    breadth=1;
}

//this create rectangle with length and bradth given
rectangle::rectangle(int l,int b)
{
    length=l;
    breadth=b;
}

rectangle::rectangle(rectangle &r)
{
    length=r.length;
    breadth=r.breadth;
}

 void rectangle::setlength(int l)
{
    length =l;
}

void rectangle::setbreadth(int b)
{
   breadth=b;
}

rectangle::area()
{
return length*breadth;
}
rectangle::perimeter()
{
return 2*(length+breadth);
}

bool rectangle::issquare()
{return length==breadth;
}
rectangle::~rectangle()
{
cout<<"Rectangle Destroyed";
}


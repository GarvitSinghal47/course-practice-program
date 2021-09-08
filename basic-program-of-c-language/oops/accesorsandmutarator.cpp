#include <iostream>
using namespace std;

class rectangle
{
    private:
    int length;
    int breadth;

    public:

    void setlength(int l)
    {
        length=l;
    }

    void setbreadth(int b)
    {
       breadth=b;
    }

    int getlength()
    {
        return length;
    }
     int getbreath()
    {
        return breadth;
    }
    int area()
    {return  length*breadth; }

    int perimeter()
    {   return  2*(length+breadth);  }
};

int main()
{
    rectangle r1;
    r1.setlength(10);
    r1.setbreadth(20);
    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;
}



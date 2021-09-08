#include <iostream>
using  namespace std;
class rectangle
{
    public:
    int length;
    int breath;

    int area()
    {return  length*breath; }

    int perimeter()
    {   return  2*(length+breath);  }
};

int main()
{
   rectangle r1;
   rectangle *ptr;
   ptr=&r1;

   /* this arrrow -> is used to accesing the 
 memberlike  doing it by* but it is specific for
classes operator,it is useful to access data memeber
 and functions of a class fun,value*/ 
   ptr->length=10;
   ptr->breath=20;
   cout<<ptr->area()<<endl;
   cout<<ptr->perimeter()<<endl;

}

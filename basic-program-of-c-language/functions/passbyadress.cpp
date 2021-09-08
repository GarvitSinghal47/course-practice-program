#include <iostream>
using namespace std;

int swap(int *a,int *b)
/*  a=&x is storing address of x and *a is storing value at &x.
*&x is equal to value of x(initially x=10).
*a will have the value present at *&x.
this will also be same for y also */

{
     cout<<a<<" "<<b<<endl;
    int temp;
    temp=*a;
   *a=*b;
    *b=temp;
    cout<<a<<" "<<b<<endl;
}

int main()
{
  int x=10,y=20;
  cout<<&x<<endl;
  swap(&x,&y);
  cout<<x<<y<<endl;
}
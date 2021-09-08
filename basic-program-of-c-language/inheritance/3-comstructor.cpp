#include <iostream>
using namespace std;

class base
{
public:
    base() {cout << "base is empty" << endl;}
    base(int x) { cout << "base is not empty"<<x << endl; }
};

class derived : public base
{
public:
    derived() { cout << "derived is empty" << endl; }
    derived(int x, int y) : base(x)
    {
        cout << "derived is not empty"<<x<<y<< endl;
    }
};

int main()
{
     
    derived d(3,4);
  
    base b;
   
}


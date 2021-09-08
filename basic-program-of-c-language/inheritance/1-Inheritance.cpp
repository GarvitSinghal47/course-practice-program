#include <iostream>
using namespace std;

class base
{
public:
    int a;
    void display()
    {
        cout << "display of base" << a << endl;
    }
};
class derived:public base
{
public:
    void show()
    {
        cout << "show of displayed" <<endl;
    }
};

int main()
{
    derived d;
    d.a = 100;
    d.show();
    d.display();
}

#include <iostream>
using namespace std;

class base
{
public:
    //pure virtual function are writed to be overwrite
    virtual void start() = 0;
};
//here public base is write to define accesibility or use allowence in the child class and main function will be of which type
class innova : public base
{
    void start()
    {
        cout << "car is innova" << endl;
    }
};

class suzuki : public base
{
    void start()
    {
        cout << "car is suzuki" << endl;
    }
};

int main()
{
    base *ptr=new innova();
    ptr->start();
//here pointer is now pointing towards suzuki
    ptr=new suzuki();
    ptr->start();
}
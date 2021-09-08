# include <iostream>
using namespace std;


class base
{
    public:

   virtual  void fun()
    {
      cout<<"function of base"<<endl;
    }
};

class derived:public base
{
    public:

    void fun()
    {
        cout<<"function of derived"<<endl;

    }

};

int main()
{
    base *ptr= new derived();
    ptr->fun();
}
#include <iostream>
using namespace std;

class basiccar
{
    public:
        virtual void start()
    {
  cout<<"basic car start"<<endl;

    }
};

class advancecar:public basiccar
{
    void music()
    {
        cout<<"advance car music"<<endl;
    }
};

int main()
{
    advancecar c;
    basiccar *ptr=&c;
    ptr->start();

	
}
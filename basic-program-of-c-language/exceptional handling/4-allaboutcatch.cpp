#include <iostream>
using namespace std;

class myexception1 : exception
{
};
class myexception2 : exception
{
};
int main()
try{
{
    throw myexception2();

}
}
catch (myexception2 e)
{
    cout << "int catch" << endl;
}
catch (myexception1 e)
{
    cout << "double catch" << endl;
}
//this message is displayed when a catch is not defined or for all non defined cases
catch (...)
{
    cout << "all catch" << endl;
}


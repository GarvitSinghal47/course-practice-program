# include <iostream>
using namespace std;

//here class is thrown in an exception case
class myexception
{

};
int division(int a,int b) throw(myexception)
{
    if (b==0)
    throw myexception();
    return a/b;

}

int main()
{
    int x=10,y=2,z;
    try 
    {
        z=division(x,y);
        cout<<z<<endl;
    }
    catch(myexception e)
    {
        cout<<"division by zero"<<endl;
    }
}
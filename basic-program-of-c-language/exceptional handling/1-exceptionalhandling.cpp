# include <iostream>
using namespace std;

int main ()
{
    int x=10,y=0,z;
   try
   {
       if (y==0)
       throw 1;

       z=x/y;
       cout<<z<<endl;

   }
   catch(int error)
   {
      cout<<"division by zero\n"<<error<<endl;
   }
   
}
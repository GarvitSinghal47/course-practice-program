#include<iostream>
using namespace std;

int max(int x,int y,int z)
    {
        if(x>y && x>z)
        {
            return x;
        }
        else if(y>z)
        {
            return y;
        }
        else
        {
            return z;
        }
    }



int main ()
{
    int x=10,y=15,z=14,maximum;
   maximum = max(x,y,z);
   cout<<maximum;
return 0;
}

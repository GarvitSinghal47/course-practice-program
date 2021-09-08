#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;
}

float add(float a, float b)
{
    return a+b;
}

int add(int a , int b, int c)
{
    return a+b+c;
}


int main ()

{
cout<<add(2,3)<<endl;
cout<<add(3.5f,5.5f)<<endl;
cout<<add(3,5,6)<<endl;
return 0;
}
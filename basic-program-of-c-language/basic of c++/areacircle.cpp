#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    float radius,area;
    cout<<"program to find area of circle"<<endl;
    cout<<"radus of circle is "<<endl;
    cin>>radius;
    area= (22/7)*(pow(radius,2));
    cout<<"the area of required triangle is"<< " "<<area <<endl;
    return 0;

}
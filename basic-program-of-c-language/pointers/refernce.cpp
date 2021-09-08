#include <iostream>
using namespace std;
int main ()
{
    int x=50;
    int &y=x;
     x++;
     y++;
     cout<<x<<endl;
     cout<<y<<endl;
}
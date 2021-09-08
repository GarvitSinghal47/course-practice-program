#include <iostream>
using namespace std;
int main ()
{
    int m1,m2,m3,total;
    float avg;
    cout<<"enter 3 nos"<<endl;
    cin>>m1>>m2>>m3;
    total= m1+m2+m3;
    avg=total/3;
    if(avg>=60)
    {
        cout<<"A"<<endl;
    }
    else
        if(avg<60 &&avg>=35)
        {
            cout<<"B"<<endl;
        }
        else
        {
            cout<<"C"<<endl;

        }

return 0;
}





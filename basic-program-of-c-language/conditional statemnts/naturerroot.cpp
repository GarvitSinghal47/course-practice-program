#include<iostream>
#include <cmath>

using namespace std;

int main ()
{
    float a,b,c,d,r1,r2;
    cout<<"enter a,b,c"<<endl;
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if (d==0)
    {
     cout<<"roots are equal";
     cout<<endl<<"roots are "<<-(b/(2*a));
    }
    else
        if (d>0)
        {
        cout<< "roots are real and enequal"<<endl;
        cout<<"roots are"<<endl<< -b+sqrt(d/2*a)<<" "<<-b-sqrt(d/2*a);
        }
        else 
        {
         cout<< "roots are not real"<<endl;
        }
return 0;


}

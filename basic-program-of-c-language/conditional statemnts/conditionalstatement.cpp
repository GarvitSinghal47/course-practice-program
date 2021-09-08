#include <iostream>
using namespace std;
int main ()
{
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    
      
if (age>=12&&age<=45)
   { cout<< "young"<<endl;}
else
   { cout<<"old"<<endl;}

    
if (age<=12||age>50)
{ cout<<"not eligible"<<endl;}
else 
{cout<<"eigible"<<endl;}
    
return 0;
}
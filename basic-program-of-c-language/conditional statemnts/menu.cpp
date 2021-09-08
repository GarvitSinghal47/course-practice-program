#include <iostream>
using namespace std;
int main ()

{    

    cout<<"here is the menU\n";
    cout<<"1: add\n"<<"2: subtract\n"<<"3: multiply\n"<<"4: divide\n";
    cout<<"select your option";
    int option;
    cin>>option;
    int a,b,c;
    cout<<"enter two no.s\n";
    cin>>a>>b;
    switch(option)                          
         {
              case 1: c=a+b;
            break;
              case 2: c=a-b;
              break;
              case 3: c= a*b;
              break;
              case 4: c=a/b;
              break;
         } 
         cout<< "result is "<<c<<endl;
         return 0;



}

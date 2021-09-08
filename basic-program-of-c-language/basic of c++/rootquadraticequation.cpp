#include<iostream>
#include<cmath>
using namespace std;
  main()
 {
    float a,b,c;
     float r1,r2;
     cout<< "plz tell the value of a,b,c";
     cin>>a>>b>>c;
     r1=(-b+sqrt(b*b-4*a*c))/(a*2);
     r2=(-b-sqrt(b*b-4*a*c))/(a*2);
     cout<<"the roots are"<<r1<<""<<r2;
     return 0;

 }
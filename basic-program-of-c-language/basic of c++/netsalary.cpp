#include <iostream>
using namespace std;
int main ()
{
    float salary,percentallow,percentdeduct,netsalary;
    cout<<"enter your salary:";
    cin>>salary;
    cout<<"enter percent of allowence:";
    cin>>percentallow;
     cout<<"enter percent of deduction:";
    cin>>percentdeduct;
     netsalary= salary+salary*percentallow/100-salary*percentdeduct/100;
     cout<<"net salary is:"<<" "<<netsalary<<endl;
     return 0;

    

}
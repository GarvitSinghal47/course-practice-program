#include <iostream>
using namespace std;

class employee
{
private:
    int eid;
    string name;

public:
    employee(int e, string n)
    {
        eid = e;
        name = n;
    }
    int getsalary() { return eid; }
    string getname() { return name; }
};

class fulltimeemployee : public employee
{
private:
    int salary;

public:
    fulltimeemployee(int e, string n, int sal) : employee(e, n)
    {
        salary = sal;
    }
    int getsalary() { return salary; }
};

class parttimeemployee: public employee
{
    private:
     int wage;

     public:
    parttimeemployee(int e,string n,int w):employee(e,n)
{
    wage=w;
}
int getwage(){return wage;}

};

int main()
{
    parttimeemployee p1(1,"john",300);
    fulltimeemployee p2(2,"mike",5000);

    cout<<"salary of "<<p2.getname()<<" is "<<p2.getsalary()<<endl;
    cout<<"daily wage of "<<p1.getname()<<" is "<<p1.getwage()<<endl;
}
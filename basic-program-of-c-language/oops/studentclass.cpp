# include<iostream>
using namespace std;

class student
{
private:
int rollno;
string name;
int maths;
int physics;
int chemistry;

public:
student(int r,string n,int m,int p,int c)
{
rollno=r;
name=n;
maths=m;
physics=p;
chemistry=c;
}

int total()
{
    return maths+chemistry+physics;
}
string grade()
{
   float average=total()/3;
    if (average>=60&&average<100)
    return "A";
    else if(average>=40&&average<60)
    return "b";
    else if (average>0&&average<40)
    return "c";
    else
    return "invalid input";
}
};


int main()
{
  
int roll;
string name;
int m,p,c;
cout<<"Enter Roll number of a Student: ";
cin>>roll;
cout<<"Enter Name of a Student:";
cin>>name;
cout<<"Enter marks in 3 subjects";
cin>>m>>p>>c;
student s(roll,name,m,p,c);
cout<<"Total Marks:"<<s.total()<<endl;
cout<<"Grade of Student:"<<s.grade()<<endl;
}





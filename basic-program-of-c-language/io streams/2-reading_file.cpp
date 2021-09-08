# include <iostream>
# include <fstream>
using namespace std;

int main()
{
ifstream ifs;
ifs.open("my text");


    string name;
    int roll;
    string branch;
    ifs>>name>>roll>>branch;

    ifs.close();
    	ifs.close();
	cout<<"name\n"<<name<<endl;
	cout<<"roll\n"<<roll<<endl;
	cout<<"branch\n"<<branch<<endl;
}



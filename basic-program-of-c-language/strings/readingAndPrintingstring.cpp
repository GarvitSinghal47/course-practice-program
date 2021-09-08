#include <iostream>
using namespace std;
int main()
{
   

    // display the whole name 
    char q[50];
    cout<<" enter your name";
    cin.get(q,50);
    cout<<" welcome"<<q<<endl;
    cin.ignore();

    char r[50];
    cout<<"enter name";
    cin.getline(r,50);
    cout<<"again welcome"<<r<<endl;

     //display only the first word of name
    char s[20];
    cout<<"enter your name";
    cin>>s;
    cout<<"welcome"<<s<<endl; 
     
 return 0;
}
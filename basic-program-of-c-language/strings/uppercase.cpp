#include<iostream>
#include<string>
using namespace std;
int main()
{
   string str="weLcome";
   for(int i=0;str[i]!='\0';i++)
   {
     
		if(str[i]>=97 && str[i]<=122)
    {str[i]=str[i]-32;
      ;}
      

   }
   cout<<str;
   cout<<endl;


   //              or                ///


 string s="welcome";
 string::iterator it;

   for(it=s.begin();it!=s.end();it++)
   {
     
		if(*it>=97 && *it<=122)
    *it=*it-32;
      

   }


cout<<s;


   return 0;

}
#include <iostream>
#include<string>
using namespace std;
int main ()
{
    string s="how are you";
    int vowels=0,consonant=0,space=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if (s[i]=='a'||   s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'||  s[i]=='A'||
        s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U'  )
        {
            vowels++;
        }
        else if(s[i]==' ')
        {
            space++;
        }
        else
        {
            consonant++;
        }

    }
        
        cout<<space<<endl;
        cout<<vowels<<endl;
        cout<<consonant<<endl;


return 0;
        
}
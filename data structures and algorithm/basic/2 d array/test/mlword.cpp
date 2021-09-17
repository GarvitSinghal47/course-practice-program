#include<iostream>
#include <cstring>
using namespace std;
main()
{
    int in=0,out=0,p=0,len1,minInd=0,min=0;
    char sub_str[100][100]={0};
    string str;
    cout<<"Enter your String:";
    getline(cin,str);

    //splitting Input String into sub string
    while(str[p]!='\0')
    {
        out=0;
        while(str[p]!=' '&&str[p]!='\0')
        {
            sub_str[in][out]=str[p];
            p++;
            out++;
        }
        sub_str[in][out]='\0';
        in++;
        if(str[p]!='\0')
        {
            p++;
        }
    }
    int len=in;
    min=strlen(sub_str[0]);
   //finding min length of Substring from splitting string length
        for(in=0;in<len;in++)
        {
            len1=strlen(sub_str[in]);
            if(len1<min)
            {
                min=len1;
                minInd=in;
            }
        }
        cout<<"Smallest Substring(Word): "<<sub_str[minInd]<<"\n";
}
  
#include <iostream>
#include <string>
using namespace std;

void printKeypad(int num, string output, string options[]){
//    here print will be done individual for each call of the last step in tree
    if(num==0){
        cout<<output<<endl;
        return ;
    }
    int n1=num%10;  //last digit
    num=num/10;
    string s1=options[n1];

    // here it will form like a tree and then 3 calls arebad seperate for each of the element of s1

    for(int i=0;i<s1.length();i++){
        printKeypad(num, s1[i]+output, options);
    }
}


void printKeypad(int num){
    string output=" ";
    string options[]={" "," ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
                     
    printKeypad(num, output, options);
    
}

int main ()
{
    int n;
    cin>>n;
    printKeypad(n);
}
// !!!!!! important and hard question


#include<iostream>
using namespace std;

int keypad(int num, string output[], string dialer[]){
    
    if(num==0){
        output[0]="";
        return 1;
    }
    
    int lastDigit=num%10;
    int smallInput= num/10;
    string smallOutput[10000];

    //small output size will take the valuse of that it was returning;
    //in first case it will run with num=0 it will return 1 as there is only one digit at last which was to be put into the input array
    // then it will run return k to get it here
    int smallOutputSize = keypad(smallInput, smallOutput, dialer);
    string op = dialer[lastDigit];
    int k=0;
    for(int i=0;i<op.size();i++){
        for(int j=0;j<smallOutputSize;j++){
            
            output[k++]=smallOutput[j]+op[i];
        }
    }
    return k;
}
int keypad(int num, string output[]) {
	string dialer[] = {" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    return keypad(num, output, dialer);
}

int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}

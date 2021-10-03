
//   image explanation link--https://www.techiedelight.com/wp-content/uploads/Permutations.png

#include <iostream>
#include <string>
using namespace std;

void permute(string a, int l, int r)  
{  
    // Base case  
    if (l == r)  
        cout<<a<<endl;  
    else
    {  
        // Permutations made  
        //i=l, will reduce or fix the no of elements that are swapped already and do swapping from the next;
        for (int i = l; i <= r; i++)  
        {  
  
            // Swapping done  
            swap(a[l], a[i]);  
  
            // Recursion called  
            permute(a, l+1, r);  
  
            //backtrack  
            //this is done to give back the same configuration when returning a call 
            swap(a[l], a[i]);  
        }  
    }  
}  
void printPermutations(string input){

    permute(input,0,input.size()-1);
}
#include <iostream>

using namespace std;

int main(){
    string input;
    cin >> input;
    printPermutations(input);
    return 0;
}
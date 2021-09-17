// C++ program for above approach
#include <bits/stdc++.h>
using namespace std;

int toint(string s)
{

    // Base case if s is empty

    // return the s
    // here s will return' '
    if (s.length() == 1)
    {
        //here 48 is minused because s[0] will  return the ascii code of the no so 48 is minus to convert it into a actual digit(0-9) or we can minus '0' as we dont know the no of it ;
        int so=s[0]-'0';
        return so;
    }
        
    else
    {
      int ans = s[0]-'0';
      int sol=(ans*pow(10, s.length() - 1))+toint(s.substr(1));
           return sol;
    }
 
    
}

// Driver code
int main()
{
    string s;
    cin >> s;
    cout<<typeid(s).name()<<endl;

    // Function call
    int result = toint(s);

    cout << result << endl;
    cout<<typeid(result).name();

    return 0;
}

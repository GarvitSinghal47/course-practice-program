# include <iostream>
using namespace std;
int main ()
{
    int sum=0;
    int a[]={4,6,7,8,9};
        for(auto x:a)
        {
        sum+=x;
        }
        cout<< "the value is"<<sum;
    return 0;
}
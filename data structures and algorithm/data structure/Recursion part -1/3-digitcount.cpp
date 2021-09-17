# include<iostream>
using namespace std;


    int digit(long long n)
{
    if (n/10 == 0)
        return 1;
    return  digit(n / 10)+1;
}



int main()
{
    long long n;
    cout<<"tell the no :";
    cin>>n;
    int no=digit(n);
    cout<<no<<endl;
}


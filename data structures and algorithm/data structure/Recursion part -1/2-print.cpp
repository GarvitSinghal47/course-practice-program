// C++ program to print from 1 to N using
// indirect recursion/
#include<bits/stdc++.h>
using namespace std;

// We can avoid use of these using references

int n = 1;

void fun1(int N);
void fun2(int N);

// Prints n, increments n and calls fun1()
void fun1(int N)
{
	if (n <= N)
	{
		cout << n << " ";
		n++;
		fun2(N);
	}
	else
		return;
}

// Prints n, increments n and calls fun2()
void fun2(int N)
{
	if (n <= N)
	{
		cout << n << " ";
		n++;
		fun1(N);
	}
	else
		return;
}

// Driver Program
int main()
{
    int N;
    cin>>N;
	fun1( N);
	return 0;
}

// This code is contributed by pankajsharmagfg.

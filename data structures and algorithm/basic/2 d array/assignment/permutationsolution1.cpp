// C++ program to check whether two strings are
// Permutations of each other

// first method using sorting

#include <bits/stdc++.h>
using namespace std;
/* function to check whether two strings are
Permutation of each other */
bool arePermutation(string str1, string str2)
{
    // Get lengths of both strings
    int n1 = str1.length();
    int n2 = str2.length();

    // If length of both strings is not same,
    // then they cannot be Permutation
    if (n1 != n2)
        return false;

    // Sort both strings
    sort(str1.begin(), str1.end());
    cout << str1 << endl;
    sort(str2.begin(), str2.end());
    cout << str2 << endl;

    // Compare sorted strings
    for (int i = 0; i < n1; i++)
        if (str1[i] != str2[i])
            return false;

    return true;
}

/* Driver program to test to print printDups*/
int main()
{
    string str1;
    string str2;
    cin >> str1;
    cin >> str2;

    if (arePermutation(str1, str2))
        printf("Yes");
    else
        printf("No");

    return 0;
}

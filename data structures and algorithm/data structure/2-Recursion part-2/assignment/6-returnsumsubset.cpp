// Given an array A of size n and an integer K, return all subsets of A which sum to K.
// Line 1 : Integer n, Size of input array
// Line 2 : Array elements separated by space
// Line 3 : K
// Constraints :
// 1 <= n <= 20
// Sample Input :
// 9
// 5 12 3 17 1 18 15 3 17
// 6
// Sample Output :
// 3 3
// 5 1

#include <iostream>

using namespace std;
int subsetsumtok(int input[], int n, int si, int output[][50], int k)
{
  if (si == n)//a
  {
    if (k == 0)
    {
      output[0][0] = 0;
      return 1;
    }
    else
      return 0;
  }
  int smalloutput1[1000][50];
  int smalloutput2[1000][50];

  int s1 = subsetsumtok(input, n, si + 1, smalloutput1, k);//1

  //input si is added as after each call the value of last element will shift or increase by 1 or it will reach towards the end of the array.
  int s2 = subsetsumtok(input, n, si + 1, smalloutput2, k - input[si]);//2

  int row = 0;
  //for both the case s1 and s2 first 1 call is done then second is done while adding or inserting in the output.
  for (int i = 0; i < s1; i++)//3
  {
    for (int j = 0; j <= smalloutput1[i][0]; j++)
    {
      output[row][j] = smalloutput1[i][j];
    }
    row++;
  }
  for (int i = 0; i < s2; i++)
  {
//this step is done for secomd case where the element of the upper tree is added so we have to append it or insert it at the initial position of the output array that we are forming after solving.

    output[row][0] = smalloutput2[i][0] + 1;//4
    output[row][1] = input[si];
    for (int j = 1; j <= smalloutput2[i][0]; j++)
    {
      output[row][j + 1] = smalloutput2[i][j];
    }
    row++;
  }

  return row;
}
int subsetSumToK(int input[], int n, int output[][50], int k)
{
  // Write your code here
  return subsetsumtok(input, n, 0, output, k);
}

int main()
{
  int input[20], length, output[10000][50], k;
  cin >> length;
  for (int i = 0; i < length; i++)
    cin >> input[i];

  cin >> k;

  int size = subsetSumToK(input, length, output, k);

  for (int i = 0; i < size; i++)
  {
    for (int j = 1; j <= output[i][0]; j++)
    {
      cout << output[i][j] << " ";
    }
    cout << endl;
  }
}
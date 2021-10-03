//hard problem revise i
// CPP program to print all subsets with given sum
#include <bits/stdc++.h>
using namespace std;

// The vector v stores current subset.
void printAllSubsetsRec(int arr[], int n, vector<int> v,
						int sum)
{
	// If remaining sum is 0, then print all
	// elements of current subset.
	if (sum == 0) {
		for (auto x : v)
			cout << x << " ";
		cout << endl;
		return;
	}

	// If no remaining elements,
	if (n == 0)
		return;

	// We consider two cases for every element.
	// a) We do not include last element.
	// b) We include last element in current subset.
	printAllSubsetsRec(arr, n - 1, v, sum);
	v.push_back(arr[n - 1]);
	printAllSubsetsRec(arr, n - 1, v, sum - arr[n - 1]);
}

// Wrapper over printAllSubsetsRec()
void printAllSubsets(int arr[], int n, int sum)
{
	vector<int> v;
	printAllSubsetsRec(arr, n, v, sum);
}

// Driver code
int main()
{
    int input[20], length, k;
  cin >> length;
  for (int i = 0; i < length; i++)
    cin >> input[i];

  cin >> k;

	
	printAllSubsets(input,length,k);
	return 0;
}
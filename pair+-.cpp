// Simple CPP program to find pairs of positive
// and negative values present in an array.
#include <bits/stdc++.h>
using namespace std;

// Print pair with negative and positive value
void printPairs(int arr[], int n)
{
	vector<int> v;

	// For each element of array.
	for (int i = 0; i < n; i++)

		// Try to find the negative value of
		// arr[i] from i + 1 to n
		for (int j = i + 1; j < n; j++)

			// If absolute values are equal print pair.
			if (abs(arr[i]) == abs(arr[j]))
				v.push_back(abs(arr[i]));

	// If size of vector is 0, therefore there is no
	// element with positive negative value, print "0"
	if (v.size() == 0)
		return;

	// Print the pair with negative positive value.
	for (int i = 0; i < v.size(); i++)
		cout << -v[i] << " " << v[i] << " ";
}

// Driver code
int main()
{
	int arr[] = { 4, 8, 9, -4, 1, -1, -8, -9 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function call
	printPairs(arr, n);
	return 0;
}


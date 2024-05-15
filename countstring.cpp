// C++ program to implement
//the above approach
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

// Utility function to check 
// if a character is a vowel 
bool isVowel(char c)
{
	if (c == 'a' || c == 'e' || 
		c == 'i' || c == 'o' || 
		c == 'u')
		return true;

	return false;
}

// Function to calculate and return the
// count of substrings with even number
// of vowels
void countSubstrings(string s, int n)
{

	// Stores the count of substrings
	int result = 0;

	for(int i = 0; i < n; i++)
	{
		int count = 0;
		for(int j = i; j < n; j++) 
		{

			// If the current character
			// is a vowel
			if (isVowel(s[j])) 
			{
				
				// Increase count
				count++;
			}

			// If substring contains
			// even number of vowels
			if (count % 2 == 0)

				// Increase the answer
				result++;
		}
	}

	// Print the final answer
	cout << result;
}

// Driver Code
int main()
{
	int n = 5;
	string s = "abcde";
	
	countSubstrings(s, n);
	return 0;
}

// This code is contributed by Amit Katiyar



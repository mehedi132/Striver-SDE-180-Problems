// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to find the Kth smallest
// odd length palindrome
int oddLengthPalindrome(int k)
{
	
	// Store the original number K
	int palin = k;

	// Removing the last digit of K
	k = k / 10;

	// Generate the palindrome by
	// appending the reverse of K
	// except last digit to itself
	while (k > 0)
	{
		
		// Find the remainder
		int rev = k % 10;
         cout << "r= " << rev << endl;

		// Add the digit to palin
		palin = (palin * 10) + rev;
        cout << "p= " << palin << endl;

        // Divide K by 10
		k = k / 10;
	}

	// Return the resultant palindromic
	// number formed
	return palin;
}

// Driver Code
int main()
{
	int k = 504;

	cout << oddLengthPalindrome(k);
}

// This code is contributed by rishavmahato348

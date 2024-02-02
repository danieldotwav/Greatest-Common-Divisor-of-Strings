#include <iostream>
using namespace std;

string gcdOfStrings(string str1, string str2);
int gcd(int a, int b);

int main() {
	// Given two strings str1 and str2, return the largest string x such that x divides 
	// both str1 and str2.

	// Test Case 1
	std::cout << "String 1: ABC\nString 2: ABCABC\nLongest Substring: " 
		<< gcdOfStrings("ABC", "ABCABC") << " // Expected: ABC\n\n";

	// Test Case 2
	std::cout << "String 1: ABABAB\nString 2: ABAB\nLongest Substring: " 
		<< gcdOfStrings("ABABAB", "ABAB") << " // Expected: AB\n\n";

	// Test Case 3: No common divisor
	std::cout << "String 1: ABC\nString 2: DEF\nLongest Substring: "
		<< gcdOfStrings("ABC", "DEF") << " // Expected: \n\n";

	// Test Case 4: Identical strings
	std::cout << "String 1: XYZXYZ\nString 2: XYZXYZ\nLongest Substring: "
		<< gcdOfStrings("XYZXYZ", "XYZXYZ") << " // Expected: XYZXYZ\n\n";

	// Test Case 5: One string is a multiple of the other
	std::cout << "String 1: X\nString 2: XXXX\nLongest Substring: "
		<< gcdOfStrings("X", "XXXX") << " // Expected: X\n\n";

	// Test Case 6: Complex repeating pattern
	std::cout << "String 1: ABCABCABC\nString 2: ABC\nLongest Substring: "
		<< gcdOfStrings("ABCABCABC", "ABC") << " // Expected: ABC\n\n";

	// Test Case 7: Strings with no repeating pattern but common divisor
	std::cout << "String 1: AABBAABB\nString 2: AABB\nLongest Substring: "
		<< gcdOfStrings("AABBAABB", "AABB") << " // Expected: AABB\n\n";

	return 0;
}

string gcdOfStrings(string str1, string str2) {
	// Check if concatenating the two strings in different orders produces the same result,
	// which indicates that they are composed of the same substring repeated.
	if (str1 + str2 != str2 + str1) {
		return ""; // If they don't form the same string when concatenated, there's no common divisor.
	}

	// The GCD string's length must be the GCD of the lengths of the two strings.
	// Find the GCD of the lengths and return the substring from the beginning of either string.
	int gcdLength = gcd(str1.length(), str2.length());
	return str1.substr(0, gcdLength);
}

int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}

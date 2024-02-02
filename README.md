# Greatest Common Divisor of Strings

## Introduction

A C++ solution for finding the Greatest Common Divisor (GCD) of two strings, extending the mathematical concept of GCD from numbers to strings.

## Implementation Details

### Algorithms

- **`gcdOfStrings(string str1, string str2)`**
  - Finds the largest string that divides both `str1` and `str2`.
  - **Parameters**: Two strings `str1` and `str2`.
  - **Returns**: The GCD string.

- **`gcd(int a, int b)`**
  - Implements the Euclidean algorithm to find the GCD of two numbers.
  - **Parameters**: Two integers `a` and `b`.
  - **Returns**: The GCD of `a` and `b`.

### Complexity Analysis

- `gcdOfStrings`
  - **Time Complexity**: O(n), where n is the length of the shorter string.
  - **Space Complexity**: O(1).

### Code Snippet

```cpp
string gcdOfStrings(string str1, string str2) {
	if (str1 + str2 != str2 + str1) {
		return "";
	}

	int gcdLength = gcd(str1.length(), str2.length());
	return str1.substr(0, gcdLength);
}
```

- `gcd`
  - **Time Complexity**: O(log(min(a, b))).
  - **Space Complexity**: O(1) for iterative implementations.

### Code Snippet

```cpp
int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}
```
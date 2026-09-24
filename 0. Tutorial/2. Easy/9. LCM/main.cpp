// This is a C++ program to find LCM (Least Common Multiple) of two numbers.

// Example: If the two numbers are 4 and 5, the LCM is 20.

// 1. Naive Approach Using Conditional Loop (Time Complexity: O(min(a, b)), Space Complexity: O(1))
#include <iostream>
#include <algorithm>
using namespace std;

int lcm(int a, int b) {
    int g = max(a, b); // Start from the maximum of a and b

    int s = min(a, b); // Store the minimum of a and b

    for (int i = g; i <= a * b; i += g) { // Loop until the product of a and b
        if (i % s == 0) { // Check if i is divisible by the smaller number
            return i; // Return the LCM
        }
    }
}

int main() {
    int a = 4, b = 5;
    cout << lcm(a, b) << endl; // Output: 20

    return 0;
}

// 2. Expected Approach Using GCD (Time Complexity: O(log(min(a, b))), Space Complexity: O(log(min(a, b))))
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b); // Recursive call with remainder
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b; // LCM formula using GCD
}

int main() {
    int a = 4, b = 5;
    cout << lcm(a, b) << endl; // Output: 20

    return 0;
}

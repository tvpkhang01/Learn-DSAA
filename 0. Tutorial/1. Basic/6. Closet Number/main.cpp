// This is a simple C++ program to find the number closest to n and divisible by m.

// Example: If n = 10 and m = 3, the closest number to 10 that is divisible by 3 is 9.

// 1. Naive approach: Iterative checking (Time Complexity: O(n), Space Complexity: O(1))

#include <iostream>
#include <climits> // For INT_MAX
using namespace std;

int closestNumber(int n, int m) {
    int closest = 0;
    int minDiff = INT_MAX; // Initialize the minimum difference to a large value

    // Check number around n
    for (int i = n - abs(m); i <= n + abs(m); ++i) {
        if (i % m == 0) { // Check if the number is divisible by m
            int diff = abs(n - i); // Calculate the difference from n
            if (diff < minDiff || (diff == minDiff && abs(i) > abs(closest))) {
                closest = i; // Update closest number
                minDiff = diff; // Update minimum difference
            }
        }
    }
    return closest; // Return the closest number found
}

int main() {
    int n = 10, m = 3;
    cout << "The closest number to " << n << " that is divisible by " << m << " is: " << closestNumber(n, m) << endl; // Output: 9
    return 0;
}

// 2. Optimized approach: By finding Quotient and Remainder (Time Complexity: O(1), Space Complexity: O(1))
#include <iostream>
using namespace std;

int closestNumber(int n, int m) {
    int q = n / m; // Find the quotient

    int n1 = m * q; // First closest number less than or equal to n
    int n2 = (n * m > 0) ? m * (q + 1) : m * (q - 1); // Second closest number greater than n

    // If n1 is closer to n than n2, return n1; otherwise, return n2
    if (abs(n - n1) <= abs(n - n2)) {
        return n1;
    }

    return n2;
}

int main() {
    int n = 10, m = 3;
    cout << "The closest number to " << n << " that is divisible by " << m << " is: " << closestNumber(n, m) << endl; // Output: 9
    return 0;
}

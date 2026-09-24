// This is a C++ program to find a perfect number.
// A number is a perfect number if it is equal to the sum of its proper divisors
// that is, the sum of its positive divisors excluding the number itself.

// Example: If the number is 15, then output is false
// because the sum of its proper divisors is 1 + 3 + 5 = 9 which is not equal to 15.

// 1. Naive Approach: Divisor Sum Method (Time Complexity: O(n), Space Complexity: O(1))
#include <iostream>
using namespace std;

bool isPerfect(int n) {
    int sum = 0; // Initialize sum of divisors

    for (int i = 1; i <= n; i++) { // Loop through all numbers from 1 to n/2
        if (n % i == 0) { // Check if i is a divisor of n
            sum += i; // Add the divisor to the sum
        }
    }

    return sum == n; // Check if the sum of divisors equals the number
}

int main() {
    int n = 15; // Input number to check
    cout << (isPerfect(n) ? "true" : "false") << endl; // Output the result
    return 0;
}

// 2. Optimized Approach: Optimized Divisor Sum Method (Time Complexity: O(sqrt(n)), Space Complexity: O(1))
#include <iostream>
using namespace std;

bool isPerfect(int n) {
    int sum = 1;

    for (int i = 2; i * i <= n; i++) { // Loop through numbers from 2 to sqrt(n)
        if (n % i == 0) { // Check if i is a divisor of n
            if (i * i != n) { // If i is not the square root of n
                sum += i + n / i; // Add both divisors
            } else {
                sum += i; // Add the square root only once
            }
        }
    }

    if (sum == n && n != 1) { // Check if the sum of divisors equals the number and n is not 1
        return true; // n is a perfect number
    }

    return false; // n is not a perfect number
}

int main() {
    int n = 15; // Input number to check
    cout << (isPerfect(n) ? "true" : "false") << endl; // Output the result
    return 0;
}



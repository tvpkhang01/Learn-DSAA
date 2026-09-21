// This is a simple C++ program to check if a number n is prime or not.

// Example: If n = 7, the output is true.

// 1. Naive approach: Basic trial division (Time Complexity: O(n), Space Complexity: O(1))
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false; // 0 and 1 are not prime numbers
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false; // If n is divisible by any number other than 1 and itself, it's not prime
    }
    return true; // If no divisors were found, n is prime
}
int main() {
    int n = 7; // Example input

    bool result = isPrime(n);
    cout << (result ? "true" : "false") << endl;

    return 0;
}

// 2. Better approach: Square root trial division (Time Complexity: O(sqrt(n)), Space Complexity: O(1))
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false; // If n is divisible by any number other than 1 and itself, it's not prime
    }
    return true; // If no divisors were found, n is prime
}

int main() {
    int n = 7; // Example input

    bool result = isPrime(n);
    cout << (result ? "true" : "false") << endl;

    return 0;
}

// 3. Optimized approach: 6k ± 1 optimization (Time Complexity: O(sqrt(n)), Space Complexity: O(1))
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false; // 0 and 1 are not prime numbers
    if (n <= 3) return true; // 2 and 3 are prime numbers
    if (n % 2 == 0 || n % 3 == 0) return false; // Eliminate multiples of 2 and 3

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false; // Check for factors of the form 6k ± 1
    }
    return true; // If no divisors were found, n is prime
}

int main() {
    int n = 7; // Example input

    bool result = isPrime(n);
    cout << (result ? "true" : "false") << endl;

    return 0;
}

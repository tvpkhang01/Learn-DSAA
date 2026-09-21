// This is a simple C++ program that calculates the factorial of a given number.

// 1. Iterative approach (Time Complexity: O(n), Space Complexity: O(1))

#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int num = 5; // Example input
    cout << factorial(num) << endl; // Output: 120
    return 0;
}

// 2. Recursive approach (Time Complexity: O(n), Space Complexity: O(n))

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num = 5; // Example input
    cout << factorial(num) << endl; // Output: 120
    return 0;
}

// This is a simple C++ program to calculate the sum of squares of the first n natural numbers.

// Example: If n = 5, the sum of squares is 1^2 + 2^2 + 3^2 + 4^2 + 5^2 = 55.

// 1. Naive Approach: Using a loop (Time Complexity: O(n), Space Complexity: O(1))

#include <iostream>
using namespace std;

int summation(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i * i; // Add the square of the current number to the sum
    }
    return sum;
}

int main() {
    int n = 5;
    cout << summation(n) << endl; // Output: 55
    return 0;
}

// 2. Optimized Approach: Using the mathematical formula (Time Complexity: O(1), Space Complexity: O(1))
#include <iostream>
using namespace std;

int summation(int n) {
    return n * (n + 1) * (2 * n + 1) / 6;
}

int main() {
    int n = 5;
    cout << summation(n) << endl; // Output: 55
    return 0;
}

// 2.1 Large value of n will cause integer overflow, which can be avoided by using different formula
int summation(int n) {
    return (n * (n + 1) / 2) * ((2 * n + 1) / 3);
}

int main() {
    int n = 10;
    cout << summation(n) << endl; // Output: 385
    return 0;
}

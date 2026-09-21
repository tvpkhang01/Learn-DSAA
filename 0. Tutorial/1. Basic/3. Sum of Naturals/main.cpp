// This is a simple C++ program to calculate the sum of natural numbers up to a given number n.

// Example: If n = 5, the sum of natural numbers is 1 + 2 + 3 + 4 + 5 = 15.

// 1. Naive Approach: Using a loop to iterate from 1 to n and summing the numbers.(Time Complexity: O(n), Space Complexity: O(1))

#include <iostream>
using namespace std;

int findSum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    n = 5;
    cout << findSum(n) << endl; // Output: 15
    return 0;
}

// 2. Alternative Approach: Using recursion (Time Complexity: O(n), Space Complexity: O(n))
#include <iostream>
using namespace std;

int findSum(int n) {
    if (n == 1) {
        return 1;
    }
    return n + findSum(n - 1);
}

int main() {
    int n = 5;
    cout << findSum(n) << endl; // Output: 15
    return 0;
}

// 3. Optimized Approach: Using the formula n*(n+1)/2 (Time Complexity: O(1), Space Complexity: O(1))
#include <iostream>
using namespace std;
int findSum(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n = 5;
    cout << findSum(n) << endl; // Output: 15
    return 0;
}

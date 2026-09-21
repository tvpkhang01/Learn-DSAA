// This is a simple C++ program to guess the number of the opposite side of a given cube.

// Example: If the given number is 1, the opposite side of the cube is 6.

// 1. Naive approach: Using a switch case (Time Complexity: O(1), Space Complexity: O(1))
#include <iostream>
using namespace std;

int oppositeSide(int n) {
    int ans;
    if (n == 1) {
        ans = 6;
    } else if (n == 2) {
        ans = 5;
    } else if (n == 3) {
        ans = 4;
    } else if (n == 4) {
        ans = 3;
    } else if (n == 5) {
        ans = 2;
    } else if (n == 6) {
        ans = 1;
    }
    return ans; // Return the opposite side number
}

int main() {
    int n = 1;
    cout << "The opposite side of the cube for " << n << " is: " << oppositeSide(n) << endl; // Output: 6
    return 0;
}

// 2. Optimized approach: Using sum of two sides of a cube (Time Complexity: O(1), Space Complexity: O(1))
#include <iostream>
using namespace std;

int oppositeSide(int n) {
    return 7 - n; // The sum of two opposite sides of a cube is always 7
}

int main() {
    int n = 1;
    cout << "The opposite side of the cube for " << n << " is: " << oppositeSide(n) << endl; // Output: 6
    return 0;
}

// This is a simple C++ program to check if y is a power of x or not.

// Example: If x = 2 and y = 8, then the output will be "Yes" because 8 is a power of 2 (2^3 = 8).

// 1. Naive Approach: Repeated Multiplication Method (Time Complexity: O(logx y), Space Complexity: O(1))
#include <iostream>
using namespace std;

bool isPower(int x, int y) {
    if (x == 1) return (y == 1); // 1 to any power is 1

    int power = 1;
    while (power < y) {
        power *= x;
    }
    return power == y;
}

int main() {
    int x = 2, y = 8; // Example input

    bool result = isPower(x, y);
    cout << (result ? "Yes" : "No") << endl;

    return 0;
}

// 2. Better Approach: Exponentiation and Binary Search (Time Complexity: O(logy), Space Complexity: O(1))
#include <iostream>
#include <cmath>
using namespace std;

bool isPower(int x, int y) {
    if (x == 1) return (y == 1); // 1 to any power is 1

    if (y == 1) return true; // Any number to the power of 0 is 1

    int pow = x, i = 1;
    while (pow < y) {
        pow *= pow;
        i *= 2;
    }

    if (pow == y) return true;

    int low = x, high = pow;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        int exponent = (int)(log(mid) / log(x));
        int result = (int)powl(x, exponent);

        if (result == y) return true;
        
        if (result < y) low = mid + 1;
        else high = mid - 1;
    }
    return false;
}

int main() {
    int x = 2, y = 8; // Example input

    bool result = isPower(x, y);
    cout << (result ? "Yes" : "No") << endl;

    return 0;
}

// 3. Optimal Approach: Using Logarithms (Time Complexity: O(1), Space Complexity: O(1))
#include <iostream>
#include <cmath>
using namespace std;

bool isPower(int x, int y) {
    if (x == 1) return (y == 1); // 1 to any power is 1
    if (y == 1) return true; // Any number to the power of 0 is 1

    double res = log(y) / log(x);

    return fabs(res - round(res)) < 1e-10; // Check if res is an integer
}

int main() {
    int x = 2, y = 8; // Example input

    bool result = isPower(x, y);
    cout << (result ? "Yes" : "No") << endl;

    return 0;
}

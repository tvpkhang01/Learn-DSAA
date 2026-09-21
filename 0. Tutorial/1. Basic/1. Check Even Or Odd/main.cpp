// This is a simple C++ program that demonstrates how to check whether given number is even or odd.

// 1. Naive Approach: Finding remainder (Time Complexity: O(1), Space Complexity: O(1))
#include <iostream>
using namespace std;

bool isEven(int num) {
    int rem = num % 2;
    if (rem == 0) {
        return true; // Number is even
    } else {
        return false; // Number is odd
    }
}


int main() {
    int num = 50;

    if (isEven(num)) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }
}

// Output: 50 is even.

// 2. Efficient Approach: Using Bitwise AND operator (Time Complexity: O(1), Space Complexity: O(1))
#include <iostream>
using namespace std;

bool isEven(int num) {
    return (num & 1) == 0; // If the least significant bit is 0, the number is even
}

int main() {
    int num = 50;

    if (isEven(num)) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }
}

// Output: 50 is even.

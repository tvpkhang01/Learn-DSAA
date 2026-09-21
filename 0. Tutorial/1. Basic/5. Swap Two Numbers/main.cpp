// This is a simple C++ program to swap two numbers.

// 1. Using a temporary variable (Time Complexity: O(1), Space Complexity: O(1))
#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a; // Store the value of a in a temporary variable
    a = b;        // Assign the value of b to a
    b = temp;    // Assign the value of temp (original a) to b
}

int main() {
    int a = 5, b = 10;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl; // Output: a = 10, b = 5
    return 0;
}

// 2. Using arithmetic operations (Time Complexity: O(1), Space Complexity: O(1))
#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    a = a + b; // Step 1: Add both numbers and store the result in a
    b = a - b; // Step 2: Subtract the new value of a (which is a + b) by b to get the original value of a
    a = a - b; // Step 3: Subtract the new value of b (which is the original value of a) from the new value of a to get the original value of b
}

int main() {
    int a = 5, b = 10;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl; // Output: a = 10, b = 5
    return 0;
}

// 3. Using bitwise XOR operation (Time Complexity: O(1), Space Complexity: O(1))
#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    a = a ^ b; // Step 1: XOR both numbers and store the result in a
    b = a ^ b; // Step 2: XOR the new value of a (which is a ^ b) by b to get the original value of a
    a = a ^ b; // Step 3: XOR the new value of b (which is the original value of a) from the new value of a to get the original value of b
}

int main() {
    int a = 5, b = 10;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl; // Output: a = 10, b = 5
    return 0;
}

// 4. Using std::swap from the C++ Standard Library (Time Complexity: O(1), Space Complexity: O(1))
#include <iostream>
#include <utility> // For std::swap
using namespace std;

int main() {
    int a = 5, b = 10;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    swap(a, b); // Using std::swap to swap the values of a and b
    cout << "After swapping: a = " << a << ", b = " << b << endl; // Output: a = 10, b = 5
    return 0;
}

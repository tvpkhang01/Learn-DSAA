// This is a simple C++ program to find the reverse of a number n.

// Example: If n = 1234, the reverse of digits is 4321.

// 1. Using digit extraction method (Time Complexity: O(log n), Space Complexity: O(1))
#include <iostream>
using namespace std;

int reverseDigits(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10; // Extract the last digit and add it to the reversed number
        n /= 10; // Remove the last digit from n
    }
    return reversed;
}

int main() {
    int n = 1234; // Example input

    int result = reverseDigits(n);
    cout << result << endl;

    return 0;
}

// 2. Using string conversion method (Time Complexity: O(log n), Space Complexity: O(1))
#include <bits/stdc++.h>

using namespace std;

int reverseDigits(int n) {
    string str = to_string(n); // Convert the number to a string
    reverse(str.begin(), str.end()); // Reverse the string
    return stoi(str); // Convert the reversed string back to an integer
}

int main() {
    int n = 1234; // Example input

    int result = reverseDigits(n);
    cout << result << endl;

    return 0;
}


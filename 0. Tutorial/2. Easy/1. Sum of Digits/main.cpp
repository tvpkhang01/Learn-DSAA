// This is a simple C++ program to calculate the sum of number n digits.

// Example: If n = 1234, the sum of digits is 1 + 2 + 3 + 4 = 10.

// 1. Using digit extraction method (Time Complexity: O(log n), Space Complexity: O(1))

#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10; // Extract the last digit and add it to sum
        n /= 10;       // Remove the last digit from n
    }
    return sum;
}

int main() {
    int n = 1234; // Example input

    int result = sumOfDigits(n);
    cout << result << endl;

    return 0;
}

// 2. Using recursion method (Time Complexity: O(log n), Space Complexity: O(log n))

#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    if (n == 0) {
        return 0; // Base case: if n is 0, return 0
    }
    return (n % 10) + sumOfDigits(n / 10); // Extract the last digit and add it to the sum of the remaining digits
}

int main() {
    int n = 1234; // Example input

    int result = sumOfDigits(n);
    cout << result << endl;

    return 0;
}

// 3. Using string conversion method (Time Complexity: O(log n), Space Complexity: O(log n))

#include <iostream>
#include <string>
using namespace std;

int sumOfDigits(int n) {
    string str = to_string(n); // Convert the number to a string
    int sum = 0;
    for (char c : str) {
        sum += c - '0'; // Convert character to integer and add to sum
    }
    return sum;
}

int main() {
    int n = 1234; // Example input

    int result = sumOfDigits(n);
    cout << result << endl;

    return 0;
}

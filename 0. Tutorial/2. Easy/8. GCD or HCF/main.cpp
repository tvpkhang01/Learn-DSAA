// This is a C++ program to find the GCD (Greatest Common Divisor) or HCF (Highest Common Factor) of two numbers.

// Example: If the two numbers are 36 and 60, the GCD is 6.

// 1. Using loop (Time Complexity: O(min(a, b)), Space Complexity: O(1))
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (a == 0 || b == 0) return max(a, b); // GCD of 0 and any number is the number itself

    int result = min(a, b);
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break; // Found the GCD
        }
        result--;
    }

    return result;
}

int main() {
    int a = 36, b = 60;
    cout << gcd(a, b) << endl; // Output: 12

    return 0;
}

// 2. Euclidean Algorithm using Abstraction (Time Complexity: O(log(min(a, b))), Space Complexity: O(min(a, b)))
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (a == 0)
        return b; // GCD of 0 and any number is the number itself
    if (b == 0)
        return a; // GCD of any number and 0 is the number itself
    if (a == b)
        return a; // GCD of two equal numbers is the number itself
    if (a > b)
        return gcd(a - b, b); // Recursive call with reduced a
    return gcd(a, b - a); // Recursive call with reduced b
}

int main() {
    int a = 36, b = 60;
    cout << gcd(a, b) << endl; // Output: 12

    return 0;
}

// 3. Euclidean Algorithm using Subtraction by Checking Divisibility (Time Complexity: O(min(a, b)), Space Complexity: O(min(a, b)))
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (a == 0)
        return b; // GCD of 0 and any number is the number itself
    if (b == 0)
        return a; // GCD of any number and 0 is the number itself
    if (a == b)
        return a; // GCD of two equal numbers is the number itself
    
    if (a > b) {
        if (a % b == 0)
            return b; // If a is divisible by b, then b is the GCD
        return gcd(a - b, b); // Recursive call with reduced a
    }

    if (b % a == 0)
        return a; // If b is divisible by a, then a is the GCD
    return gcd(a, b - a); // Recursive call with reduced b
}

int main() {
    int a = 36, b = 60;
    cout << gcd(a, b) << endl; // Output: 12

    return 0;
}

// 4. Euclidean Algorithm by checking remainder (Time Complexity: O(log(min(a, b))), Space Complexity: O(log(min(a, b))))
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b); // Recursive call with remainder
}

int main() {
    int a = 36, b = 60;
    cout << gcd(a, b) << endl; // Output: 12

    return 0;
}

// 5. Using built-in function (Time Complexity: O(log(min(a, b))), Space Complexity: O(1))
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    return __gcd(a, b); // Using built-in function to find GCD
}

int main() {
    int a = 36, b = 60;
    cout << gcd(a, b) << endl; // Output: 12

    return 0;
}



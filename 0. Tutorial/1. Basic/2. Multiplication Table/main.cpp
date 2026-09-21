// This is a simple C++ program that demonstrates how to create a multiplication table

// 1. Iterative approach using a for loop (Time Complexity: O(1), Space Complexity: O(1))

#include <iostream>
using namespace std;

void printTable(int n) {
    for (int i = 1; i <= 10; ++i) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

int main() {
    int num = 5;

    cout << "Multiplication Table of " << num << ":" << endl;
    printTable(num);

    return 0;
}

// 2. Recursive approach (Time Complexity: O(1), Space Complexity: O(1))
#include <iostream>
using namespace std;

void printTable(int n, int i = 1) {
    if (i == 11) {
        return; // Base case: Stop when i exceeds 10
    }

    cout << n << " x " << i << " = " << n * i << endl;
    i++;
    printTable(n, i); // Recursive call with incremented i
}

int main() {
    int num = 5;

    cout << "Multiplication Table of " << num << ":" << endl;
    printTable(num);

    return 0;
}

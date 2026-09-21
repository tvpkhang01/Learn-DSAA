// This is a simple C++ program to count all 'a' and 'b' that satisfy the condition a^3 + b^3 = n for a given integer n.

// Example: If n = 1729, the pairs (1, 12) and (9, 10) 
// satisfy the condition since 1^3 + 12^3 = 1729 and 9^3 + 10^3 = 1729.
// Therefore, the output will be 2.


// 1. Naive Approach: Using nested loops (Time Complexity: O(n^(2/3)), Space Complexity: O(1))
#include <iostream>
using namespace std;

int countPairs(int n) {
    int count = 0;
    for (int a = 1; a <= n; a++) {
        for (int b = a; b <= n; b++) {
            if (a * a * a + b * b * b == n) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n = 1729; // Example input
    int result = countPairs(n);
    cout << result << endl; // Output: 2
    return 0;
}

// 2. Optimized Approach: Finding different pairs using a single loop (Time Complexity: O(n^(1/3)), Space Complexity: O(1))
#include <bits/stdc++.h>
using namespace std;

int countPairs(int n) {
    int count = 0;
    for (int i = 1; i <= cbrt(n); i++) {
        // Calculate the cube of i
        int cb = i * i * i;
        // Subtract the cube from n
        int diff = n - cb;

        // Check if the difference is a perfect cube
        int cbrtDiff = cbrt(diff);

        // If yes, increment the count
        if (cbrtDiff * cbrtDiff * cbrtDiff == diff) {
            count++;
        }

    }
    return count;
}

int main() {
    int n = 1729; // Example input
    int result = countPairs(n);
    cout << result << endl; // Output: 2
    return 0;
}

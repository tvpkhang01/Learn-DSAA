// This is a simple C++ program that check if two rectangles overlap or not.

// A rectangle is defined by four points: l1, r1, l2, r2
// where l1 and r1 are the top-left and bottom-right corners of the first rectangle
// and l2 and r2 are the top-left and bottom-right corners of the second rectangle.

// Example:
// Rectangle 1: l1 = (0, 10), r1 = (10, 0)
// Rectangle 2: l2 = (5, 5), r2 = (15, 0)
// Output: Rectangles Overlap

#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
};

// Return true if two rectangles (l1, r1) and (l2, r2) overlap
// overlap
bool doOverlap(Point l1, Point r1, Point l2, Point r2) {
    // If one rectangle is on left side of other
    if (l1.x >= r2.x || l2.x >= r1.x)
        return false;

    // If one rectangle is above other
    if (l1.y <= r2.y || l2.y <= r1.y)
        return false;

    return true;
}

int main() {
    Point l1 = {0, 10}, r1 = {10, 0};
    Point l2 = {5, 5}, r2 = {15, 0};

    if (doOverlap(l1, r1, l2, r2))
        cout << "Rectangles Overlap";
    else
        cout << "Rectangles Don't Overlap";

    return 0;
}

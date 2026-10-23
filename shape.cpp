#include <iostream>
using namespace std; 
int main()
{
int n = 7;

// Row 1: i = 1
for (int space = 1; space <= (7-1)/2; space++)  // space <= 3
    cout << " ";  // Prints 3 spaces
// Then prints 1 star

// Row 2: i = 3
for (int space = 1; space <= (7-3)/2; space++)  // space <= 2
    cout << " ";  // Prints 2 spaces
// Then prints 3 stars

// Row 3: i = 5
for (int space = 1; space <= (7-5)/2; space++)  // space <= 1
    cout << " ";  // Prints 1 space
// Then prints 5 stars

// Row 4: i = 7
for (int space = 1; space <= (7-7)/2; space++)  // space <= 0
    cout << " ";  // Prints 0 spaces (loop doesn't run)
// Then prints 7 stars
    return 0;
}

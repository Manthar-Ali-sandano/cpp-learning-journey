#include<iostream>
using namespace std;
int main()
{
//     enum Color { RED, GREEN, BLUE }; // Internally RED=0, GREEN=1, BLUE=2
// Color myColor = RED;
// if (myColor == RED) {
//     cout << "Stop!";
// }

int score = 85;
if (score >= 90) {
    cout << "Grade A";
}  if (score >= 75) {
    cout << "Grade B";
}  if (score >= 50) {
    cout << "Grade C";
} else {
    cout << "Grade F";
}
// Output: Grade B
}
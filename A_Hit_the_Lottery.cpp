#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read the amount of money

    int count = 0;  // Initialize count for the number of coins

    // Process the amount of money
    while (n > 0) {
        if (n >= 100) {
            n -= 100;
        } else if (n >= 20) {
            n -= 20;
        } else if (n >= 10) {
            n -= 10;
        } else if (n >= 5) {
            n -= 5;
        } else {
            n -= 1;
        }
        count++;  // Increment the coin count
    }

    cout << count << endl;  // Output the result
    return 0;
}

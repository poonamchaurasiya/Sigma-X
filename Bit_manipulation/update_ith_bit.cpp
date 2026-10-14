#include <iostream>
using namespace std;

int main() {
    int n, i, bit;
    cout << "Enter number: ";
    cin >> n;

    cout << "Enter bit position: ";
    cin >> i;

    cout << "Enter new bit (0 or 1): ";
    cin >> bit;

    if (bit == 1)
        n = n | (1 << i);       // Set ith bit
    else
        n = n & ~(1 << i);      // Clear ith bit

    cout << "Updated number: " << n << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string binary, onesComplement;

    cout << "Enter a binary number: ";
    cin >> binary;

    for (char bit : binary) {
        if (bit == '0') {
            onesComplement += '1';
        } else if (bit == '1') {
            onesComplement += '0';
        } else {
            cout << "Invalid binary number!" << endl;
            return 0;
        }
    }

    cout << "1's Complement: " << onesComplement << endl;

    return 0;
}





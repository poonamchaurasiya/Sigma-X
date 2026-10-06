#include <iostream>
using namespace std;

bool search(int mat[][4], int n, int m, int key) {
    int i = 0;
    int j = m - 1;

    // Start from top-right corner
    while (i < n && j >= 0) {

        if (mat[i][j] == key) {
            cout << "Element found at (" << i << ", " << j << ")" << endl;
            return true;
        }
        else if (mat[i][j] > key) {
            // Move left
            j--;
        }
        else {
            // Move down
            i++;
        }
    }

    return false;
}

int main() {

    int matrix[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 37, 48, 49},
        {32, 33, 39, 50}
    };

    int key = 37;

    if (!search(matrix, 4, 4, key)) {
        cout << "Element not found" << endl;
    }

    return 0;
}
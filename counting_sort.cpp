#include <iostream>
using namespace std;

void countingSort(int arr[], int n) {
    // Find the maximum element
    int maxVal = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    // Create count array
    int count[maxVal + 1] = {0};

    // Store frequency of each element
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Put elements back into original array
    int index = 0;

    for (int i = 0; i <= maxVal; i++) {
        while (count[i] > 0) {
            arr[index] = i;
            index++;
            count[i]--;
        }
    }
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {5, 4, 1, 3, 2};

    countingSort(arr, 5);

    print(arr, 5);

    return 0;
}
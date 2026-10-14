
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int i = 2;

    int bit = (n >> i) & 1;

    cout << bit << endl;

    return 0;
}

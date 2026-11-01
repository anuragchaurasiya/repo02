// Concepts: functions, while loops, modulo, and decimal-to-binary conversion.
#include <iostream>
using namespace std;

void decimal_to_binaryNO(int n) {
    while (n > 0) {
        int bit = n % 2;
        cout << bit;
        n = n / 2;
    }
}

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    decimal_to_binaryNO(n);

    return 0;
}
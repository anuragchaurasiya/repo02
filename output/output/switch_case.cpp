#include <iostream>
using namespace std;

int main() {
    char grade;

    cout << "Enter your grade (A/B/C/D): ";
    cin >> grade;

    switch (grade) {
        case 'A':
            cout << "Your marks are in the range of 90 to 100." << endl;
            break;

        case 'B':
            cout << "Your marks are in the range of 80 to 89." << endl;
            break;

        case 'C':
            cout << "Your marks are in the range of 70 to 79." << endl;
            break;

        case 'D':
            cout << "Your marks are in the range of 60 to 69." << endl;
            break;

        default:
            cout << "Your marks are below 60." << endl;
    }

    return 0;
}
// Concepts: arrays, indexed input/output, for loops, and basic input validation.
#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int numbers[size];

    cout << "Enter " << size << " integers:" << endl;
    for (int index = 0; index < size; index++)
    {
        cout << "Element " << index + 1 << ": ";
        if (!(cin >> numbers[index]))
        {
            cout << "Invalid input." << endl;
            return 1;
        }
    }

    cout << "Array elements: ";
    for (int index = 0; index < size; index++)
    {
        cout << numbers[index] << (index + 1 == size ? '\n' : ' ');
    }

    return 0;
}
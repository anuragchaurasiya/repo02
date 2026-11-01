// Concepts: arrays, sizeof-based length calculation, indexed updates, and traversal.
#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    const int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Original array: ";
    for (int index = 0; index < size; index++)
    {
        cout << numbers[index] << " ";
    }

    numbers[2] = 99;

    cout << "\nUpdated array: ";
    for (int index = 0; index < size; index++)
    {
        cout << numbers[index] << " ";
    }

    cout << endl;
    return 0;
}
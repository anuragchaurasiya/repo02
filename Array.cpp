// Concepts: fixed-size arrays, array traversal, function parameters, and console output.
#include <iostream>
using namespace std;

void printArray(int size, int arr[])
{
    for (int index = 0; index < size; index++)
    {
        cout << arr[index] << " ";
    }
}

int main()
{
    int arr[] = {10, 20, 0, 2, 12};
    int size = 5;

    printArray(size, arr);

    return 0;
}
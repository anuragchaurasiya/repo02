#include <iostream>
using namespace std;

void printMultiplesOfTen(int numbers[], int size)
{
    for (int index = 0; index < size; index++)
    {
        numbers[index] = 10 * (index + 1);
        cout << numbers[index] << endl;
    }
}

int main()
{
    const int size = 10;
    int numbers[size] = {};

    printMultiplesOfTen(numbers, size);
    return 0;
}
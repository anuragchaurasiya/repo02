// Concepts: array traversal, for loops, accumulator variables, and summation.
// Concepts: array traversal, for loops, accumulator variables, and summation.
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 15, 65, 89, 56};
    int sum = 0;

    for (int index = 0; index < 5; index++)
    {
        sum = sum + arr[index];
    }

    cout << "Total Sum = " << sum << endl;

    return 0;
}
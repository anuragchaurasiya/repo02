// Concepts: functions with parameters, for loops, and counting.
#include <iostream>
using namespace std;

void countingNumber(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
}

int main()
{
    countingNumber(100);

    return 0;
}
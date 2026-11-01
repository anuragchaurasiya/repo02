// Concepts: nested loops, divisibility with modulo, boolean flags, and break.
// Concepts: nested loops, divisibility with modulo, boolean flags, and break.
#include <iostream>
using namespace std;

void PrimeNumber()
{
    for (int i = 2; i <= 100; i++)
    {
        bool prime = true;

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = false;
                break;
            }
        }

        if (prime)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    PrimeNumber();

    return 0;
}
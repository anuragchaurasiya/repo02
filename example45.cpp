// Concepts: user-defined functions, parameters, return values, and simple-interest arithmetic.
#include <iostream>
using namespace std;
int simpleintrest(int p, int r, int t)
{
    int SI = p * r * t / 100;
    cout << SI << endl;
    return SI;
}
int main()
{
    int SI = simpleintrest(7, 8, 9);

    cout << "Principal = 7" << endl;
    cout << "Rate = 8" << endl;
    cout << "Time = 9" << endl;
    cout << "Simple Interest = " << SI << endl;

    return 0;
}
// Concepts: functions, parameters, if/else conditions, console input, and validation.
// Concepts: functions, parameters, if/else conditions, console input, and validation.
#include <iostream>
using namespace std;

void checkVotingEligibility(int age)
{
    if (age >= 18)
    {
        cout << "Eligible to vote." << endl;
    }
    else
    {
        cout << "Not eligible to vote yet." << endl;
    }
}

int main()
{
    int age;

    cout << "Enter age: ";
    if (!(cin >> age) || age < 0)
    {
        cout << "Please enter a valid non-negative age." << endl;
        return 1;
    }

    checkVotingEligibility(age);
    return 0;
}
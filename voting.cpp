#include <iostream>
using namespace std;
void eligibleVote(int n)
{

    if (18 >= n)
    {
        cout << "eligible for vate" << endl;
    }
    else
    {
        cout << "Not eligible for vote" << endl;
    }
}
int main()
{
    int n;

    cout << "Enter Age: ";
    cin >> n;

    eligibleVote(n);

    return 0;
}
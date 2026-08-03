#include <iostream>
using namespace std;
void mulitiply_of_10(int num[], int size)
{
    int count = 1;
    for (int index = 0; index < 9; index++)
    {
        num[index] = 10 * count;
        count++;
        cout << num[index] << endl;
    }
}
int main()
{
    int arr[10];
    int size = 10;
    mulitiply_of_10(arr, size);
    return 0;
}
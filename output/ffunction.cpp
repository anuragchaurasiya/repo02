// Concepts: user-defined functions, return values, void functions, and function calls.
#include<iostream>
using namespace std;
int sum(int a, int b){
int totalsum =a + b;
return totalsum;}
void printMYName(){
cout <<"Anurag" << endl;
}
int main(){
int ans = sum(5,6);
    cout << ans << endl;
    printMYName();
return 0;

}


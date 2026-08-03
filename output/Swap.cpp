#include<iostream>
using namespace std;
int main(){
int a=10;
int b=15;
int temp;

temp = a;
a=b;
b=temp;
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
return 0;
}

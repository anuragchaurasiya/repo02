// Concepts: if/else-if conditions, logical AND, comparisons, and finding the largest value.
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter  three number";
    cin>>a>>b>>c;
    if(a>=b&&a>=c){
        cout<<"Largest number="<<a;
    }
    else if(b>=a&&b>=c){
        cout<<"Largst number="<<b;
    }
    else 
        cout<<"Largst number="<<c;
    
    return 0;
}

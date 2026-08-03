#include<iostream>
using namespace std;
int getMultiply(int a,int b,int c){
    int totalMultiply = a*b*c;
    return totalMultiply ;
}
int main(){
    int ans=getMultiply(4,5,6);
    cout<<ans<<endl;
    return 0;
}
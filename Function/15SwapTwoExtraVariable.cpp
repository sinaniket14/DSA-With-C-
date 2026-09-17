#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cin>>a>>b;
    // Extra Variable
    // temp=a;
    // a=b;
    // b=temp;
    // cout<<temp;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b;
}
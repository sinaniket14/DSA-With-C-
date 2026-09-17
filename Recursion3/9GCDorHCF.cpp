#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a==0) return b;
    else return gcd(b%a,a);
}
int main(){
    int a;
    cout<<"Enter first number : ";
    cin>>a;
    int b;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<gcd(a,b);
}
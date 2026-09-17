#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int rev=0;
    int add=n;
    int digit=0;
    int revadd=0;
    while(n>0){
        rev=rev*10;
        digit=n%10;
        rev=rev+digit;
        n/=10;
        revadd=add+rev;
    }
    cout<<add<<"+"<<rev<<"->"<<revadd;
}
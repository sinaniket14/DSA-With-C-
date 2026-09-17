#include<iostream>
using namespace std;
int main(){
    int  n;
    cout<<"Enter a number:";
    cin>>n;
    int a=n;
    int sum=0;
    while(n>0){
        int d=n%10;
        sum=sum+(d*d*d);
        n/=10;
    }
    if(a==sum) cout<<a<<":-> is an Armstrong number";
    else cout<<a<<":-> is not an Armstrong number";
}
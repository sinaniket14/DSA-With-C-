#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int x=0;
    int rev=0;
    int num=n;
    while(n>0){
        x=n%10;
        rev=rev*10+x;
        n/=10;

    }
    if(rev==num) cout<<"yes";
    else cout<<"no";
    
}
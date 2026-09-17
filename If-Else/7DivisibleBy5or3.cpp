#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number :";
    int n;
    cin>>n;
    if(n%5==0 || n%3==0){
        cout<<"Yes Divisible by 5 or 3";
    }
    else{
        cout<<"Not divisible by 5 or 3";
    }
    return 0;
}
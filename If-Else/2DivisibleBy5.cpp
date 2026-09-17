#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number :";
    cin>>x;
    if(x%5==0){
        cout<<"Divisible by Five";
    }
    else{
        cout<<" Not Divisible by Five";
    }
    return 0;
}
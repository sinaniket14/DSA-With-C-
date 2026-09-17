#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number :";
    int n;
    cin>>n;
    if(n%5==0 && n%3==0){
        cout<<"Yes Divisible";
    }
    else{
        cout<<"Not divisible";
    }
    return 0;
}
#include<iostream>
using namespace std;
void greet(int n){
    for(int i=0;i<n;i++){
        cout<<"Coding is easy"<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    greet(n);
}
#include<iostream>
using namespace std;
void Ncount(int n){
    int count=0;
     while(n>0){
        n=n/10;
        count++;
    }
    cout<<count*count;
}
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    Ncount(n);
}
#include<iostream>
using namespace std;
void swap(int &a,int &b){ // pass by referance
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int a,b;
    cout<<"Enter a number :";
    cin>>a;
    cout<<"Enter second number :";
    cin>>b;
    // int* x=&a;
    // int* y=&b;
    // swap(x,y);
    swap(a,b);
    cout<<a<<" "<<b;;
}
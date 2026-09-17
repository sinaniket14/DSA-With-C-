#include<iostream>
using namespace std;
int main(){
    int x=5;
    int* ptr1=&x;
    int** p=&ptr1;
    cout<<x<<endl;
    cout<<*ptr1<<endl;
    cout<<**p<<endl;
}
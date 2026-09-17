#include<iostream>
using namespace std;
int main(){
    char str[5]={'a','b','c','d','e'};
    cout<<(int)(str[5]); // compiler adds a null character at last for termination 
    // Ascii value of "\0"=0
}
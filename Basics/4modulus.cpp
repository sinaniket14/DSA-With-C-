#include<iostream>
using namespace std;
int main(){
    int a=5, b=2;   // use int
    float c= a % b; //invalid operands of types 'float' and 'float' to binary 'operator%'
    cout<<c;
}
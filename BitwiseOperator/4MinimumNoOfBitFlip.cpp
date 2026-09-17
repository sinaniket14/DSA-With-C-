#include<iostream>
using namespace std;
int main(){
    int x=23;  // 010111
    int y=32;  // 100000
    // we need to flip 5 bit to make it similar
    cout<<__builtin_popcount(x^y);
}
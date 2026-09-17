#include<iostream>
using namespace std;
int main(){
    char str[]={'a','b','c','d','e','f','\0'};
    for(int i=0;str[i]!='\0';i++){  // perfect code
        cout<<str[i]<<" ";
    }
    // char str[] = "abcdef";
    // for (int i = 0; str[i] != '\0'; i++) {
    //     cout << str[i] << " ";
    // } abcdef
}
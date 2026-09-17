#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    // string s="abcdef";
    // // s.substr(idx,length)
    // cout<<s.substr(1,3);

    string str;
    cout<<"Enter a string : ";
    cin>>str; // input only single line no any space
    int n=str.length();
    cout<<str.substr(n/2);
   
}
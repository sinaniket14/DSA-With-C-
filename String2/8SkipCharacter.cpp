#include<iostream>
using namespace std;
int main(){
    string str="aniketsingh";
    string s="";
    for(int i=0;i<str.length();i++){
        if(str[i]!='i') s += str[i];
    }
    cout<<s;
}
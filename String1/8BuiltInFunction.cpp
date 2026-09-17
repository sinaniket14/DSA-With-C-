#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // string str="aniket";
    // cout<<str.size()<<endl;
    //cout<<str.length()<<endl;

    // string str="singh";
    // str.push_back('a');
    // str.push_back('n');
    // cout<<str<<endl;

    // string str="singh";
    // str.pop_back();
    // str.pop_back();
    // cout<<str<<endl;

    // string s="Aniket";
    // string t="Singh";
    // s=s+t; // s=t+s=SinghAniket  s=s+"xyz"=Aniketxyz
    // cout<<s;

    string s="abcdef";
    reverse(s.begin()+2,s.end()-1);
    cout<<s;
}
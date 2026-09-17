#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    string t=s;
    reverse(s.begin(),s.end());
    cout<<t+s;
}
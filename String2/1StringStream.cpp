#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main(){
    string str="aniket is my name";
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
}